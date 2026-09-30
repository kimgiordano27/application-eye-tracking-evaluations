/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_IsMrcActivated
ENTRY_POINT: 03392724
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033928e0) */

undefined1
OVRPlugin_OVRP_1_38_0__ovrp_Media_IsMrcActivated(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong in_x9;
  int *in_x10;
  int *piVar4;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  undefined8 *unaff_x27;
  undefined1 unaff_w28;
  undefined2 uStack0000000000000008;
  
  do {
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_03392750;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar1 = (undefined8 *)FUN_01c72498();
LAB_03392750:
        uVar2 = (*(code *)*puVar1)();
        if ((uVar2 & 1) == 0) {
LAB_03392848:
          if (unaff_x20 == (long *)0x0) goto LAB_033928ac;
          lVar3 = *unaff_x20;
          uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar2 == 0) goto LAB_03392884;
          piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          goto LAB_0339286c;
        }
        lVar3 = *unaff_x20;
        uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar2 != 0) {
          piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == *unaff_x25) {
              puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
              goto LAB_033927ac;
            }
            uVar2 = uVar2 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar2 != 0);
        }
        puVar1 = (undefined8 *)FUN_01c72498();
LAB_033927ac:
        lVar3 = (*(code *)*puVar1)();
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        if ((*(byte *)(unaff_x26 + 0x6a1) & 1) == 0) {
          FUN_01c5d288();
          *(undefined1 *)(unaff_x26 + 0x6a1) = unaff_w28;
        }
        if (*(int *)(lVar3 + 0x14) != 0) {
LAB_03392820:
          _uStack0000000000000008 = _uStack0000000000000008 & 0xffffffffffff0000;
          System_Collections_ObjectModel_ReadOnlyCollection<FrameTimeSample>__System_Collections_IList_set_Item
                    (&stack0x00000008,1,*unaff_x23);
          *(undefined2 *)(unaff_x19 + 0xf9) = uStack0000000000000008;
          goto LAB_03392848;
        }
        if ((*(ulong *)(lVar3 + 0x90) & 0xff) == 0) {
          uVar2 = 0;
        }
        else {
          _uStack0000000000000008 = 0;
          FUN_02f2115c(&stack0x00000008,(uint)(*(ulong *)(lVar3 + 0x90) >> 0x20) & 2,*unaff_x27);
          uVar2 = _uStack0000000000000008;
        }
        if ((uVar2 >> 0x20 == 2) && ((uVar2 & 0xff) != 0)) goto LAB_03392820;
        param_1 = *unaff_x20;
        param_3 = *unaff_x24;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_ZR = *(long *)(in_x10 + -2) == param_3;
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar4 = piVar4 + 4;
    if (uVar2 == 0) break;
LAB_0339286c:
    if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0422fce8) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_033928a0;
    }
  }
LAB_03392884:
  puVar1 = (undefined8 *)FUN_01c72498();
LAB_033928a0:
  (*(code *)*puVar1)();
LAB_033928ac:
  return *(undefined1 *)(unaff_x19 + 0xfa);
}


