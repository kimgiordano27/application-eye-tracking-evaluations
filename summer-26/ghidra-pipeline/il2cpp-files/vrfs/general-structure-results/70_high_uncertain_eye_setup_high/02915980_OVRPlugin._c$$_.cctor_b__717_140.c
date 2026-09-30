/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__717_140
ENTRY_POINT: 02915980
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__717_140(long param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long in_x9;
  int *piVar7;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *plVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000008;
  
  uVar10 = *(undefined8 *)(*(long *)(in_x9 + 0xc0) + 0x58);
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_016466fc(param_1);
  }
  plVar2 = (long *)FUN_031c8668(uVar10,0);
  if (param_2 != (long *)0x0) {
    uVar3 = (**(code **)(*param_2 + 0x298))(param_2,plVar2,*(undefined8 *)(*param_2 + 0x2a0));
    if ((uVar3 & 1) == 0) {
      if (plVar2 == (long *)0x0) goto LAB_02915c04;
      uVar3 = (**(code **)(*plVar2 + 0x298))(plVar2,param_2,*(undefined8 *)(*plVar2 + 0x2a0));
      if ((uVar3 & 1) == 0) {
        FUN_031dbd4c(0);
      }
    }
    plVar2 = (long *)thunk_FUN_015d0480();
    if (plVar2 == (long *)0x0) {
      FUN_031dbd4c();
    }
    plVar8 = *(long **)(unaff_x21 + 0x10);
    if (plVar8 != (long *)0x0) {
      lVar5 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_015c2790(lVar5);
      }
      lVar6 = *plVar8;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar5) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_02915abc;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_015c2a80(plVar8,lVar5,0);
LAB_02915abc:
      iVar1 = (*(code *)*puVar4)(plVar8,puVar4[1]);
      if (0 < iVar1) {
        iVar9 = 0;
        do {
          plVar8 = *(long **)(unaff_x21 + 0x10);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
          if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
            lVar5 = FUN_015c2790(lVar5);
          }
          lVar6 = *plVar8;
          uVar3 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar3 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == lVar5) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_02915b48;
              }
              uVar3 = uVar3 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)FUN_015c2a80(plVar8,lVar5,0);
LAB_02915b48:
          in_stack_00000008._4_4_ = (*(code *)*puVar4)(plVar8,iVar9,puVar4[1]);
          lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60);
          if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
            lVar5 = FUN_015c2790();
          }
          lVar5 = thunk_FUN_015d01b0(lVar5,(long)&stack0x00000008 + 4);
          if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          if ((lVar5 != 0) &&
             (lVar6 = thunk_FUN_015d0480(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar6 == 0)) {
            uVar10 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
            FUN_0160ee7c(uVar10,0);
          }
          if (*(uint *)(plVar2 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eebc();
          }
          plVar2[(long)(int)unaff_w19 + 4] = lVar5;
          thunk_FUN_01656ef8(plVar2 + (long)(int)unaff_w19 + 4,lVar5);
          iVar9 = iVar9 + 1;
          unaff_w19 = unaff_w19 + 1;
        } while (iVar9 != iVar1);
      }
      return;
    }
  }
LAB_02915c04:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


