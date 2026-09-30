/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__717_142
ENTRY_POINT: 02915a60
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__717_142(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  int *in_x10;
  int *piVar7;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  int iVar8;
  long *plVar9;
  undefined8 in_stack_00000008;
  
  do {
    if ((bool)in_ZR) {
      puVar2 = (undefined8 *)FUN_015c2a80();
LAB_02915abc:
      iVar1 = (*(code *)*puVar2)();
      if (0 < iVar1) {
        iVar8 = 0;
        do {
          plVar9 = *(long **)(unaff_x21 + 0x10);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
          if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
            lVar4 = FUN_015c2790(lVar4);
          }
          lVar5 = *plVar9;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == lVar4) {
                puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_02915b48;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar2 = (undefined8 *)FUN_015c2a80(plVar9,lVar4,0);
LAB_02915b48:
          in_stack_00000008._4_4_ = (*(code *)*puVar2)(plVar9,iVar8,puVar2[1]);
          lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60);
          if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
            lVar4 = FUN_015c2790();
          }
          lVar4 = thunk_FUN_015d01b0(lVar4,(long)&stack0x00000008 + 4);
          if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_015d0480(lVar4,*(undefined8 *)(*unaff_x22 + 0x40)), lVar5 == 0)) {
            uVar3 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
            FUN_0160ee7c(uVar3,0);
          }
          if (*(uint *)(unaff_x22 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eebc();
          }
          unaff_x22[(long)(int)unaff_w19 + 4] = lVar4;
          thunk_FUN_01656ef8(unaff_x22 + (long)(int)unaff_w19 + 4,lVar4);
          iVar8 = iVar8 + 1;
          unaff_w19 = unaff_w19 + 1;
        } while (iVar8 != iVar1);
      }
      return;
    }
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)in_x10[4] * 0x10 + 0x138);
      goto LAB_02915abc;
    }
    in_x9 = in_x9 + -1;
    in_ZR = in_x9 == 0;
    in_x10 = in_x10 + 4;
  } while( true );
}


