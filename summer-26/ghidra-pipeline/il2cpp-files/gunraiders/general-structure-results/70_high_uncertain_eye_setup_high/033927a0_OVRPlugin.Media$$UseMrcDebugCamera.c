/*
FUNCTION_NAME: OVRPlugin.Media$$UseMrcDebugCamera
ENTRY_POINT: 033927a0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033928e0) */

undefined1 OVRPlugin_Media__UseMrcDebugCamera(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  int *in_x10;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  undefined8 *unaff_x27;
  undefined1 unaff_w28;
  undefined2 uStack0000000000000008;
  
code_r0x033927a0:
  puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  while( true ) {
    lVar1 = (*(code *)*puVar2)();
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if ((*(byte *)(unaff_x26 + 0x6a1) & 1) == 0) {
      FUN_01c5d288();
      *(undefined1 *)(unaff_x26 + 0x6a1) = unaff_w28;
    }
    if (*(int *)(lVar1 + 0x14) != 0) break;
    if ((*(ulong *)(lVar1 + 0x90) & 0xff) == 0) {
      uVar3 = 0;
    }
    else {
      _uStack0000000000000008 = 0;
      FUN_02f2115c(&stack0x00000008,(uint)(*(ulong *)(lVar1 + 0x90) >> 0x20) & 2,*unaff_x27);
      uVar3 = _uStack0000000000000008;
    }
    if ((uVar3 >> 0x20 == 2) && ((uVar3 & 0xff) != 0)) break;
    lVar1 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar1 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_03392750;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_01c72498();
LAB_03392750:
    uVar3 = (*(code *)*puVar2)();
    if ((uVar3 & 1) == 0) goto LAB_03392848;
    param_1 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar3 != 0) {
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(in_x10 + -2) == *unaff_x25) goto code_r0x033927a0;
        uVar3 = uVar3 - 1;
        in_x10 = in_x10 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_01c72498();
  }
  _uStack0000000000000008 = _uStack0000000000000008 & 0xffffffffffff0000;
  System_Collections_ObjectModel_ReadOnlyCollection<FrameTimeSample>__System_Collections_IList_set_Item
            (&stack0x00000008,1,*unaff_x23);
  *(undefined2 *)(unaff_x19 + 0xf9) = uStack0000000000000008;
LAB_03392848:
  if (unaff_x20 != (long *)0x0) {
    lVar1 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0422fce8) {
          puVar2 = (undefined8 *)(lVar1 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_033928a0;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_01c72498();
LAB_033928a0:
    (*(code *)*puVar2)();
  }
  return *(undefined1 *)(unaff_x19 + 0xfa);
}


