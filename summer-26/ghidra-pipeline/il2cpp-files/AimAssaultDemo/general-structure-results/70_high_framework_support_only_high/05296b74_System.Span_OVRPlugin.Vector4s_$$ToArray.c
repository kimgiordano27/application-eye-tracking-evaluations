/*
FUNCTION_NAME: System.Span<OVRPlugin.Vector4s>$$ToArray
ENTRY_POINT: 05296b74
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05296ce8) */

void System_Span<OVRPlugin_Vector4s>__ToArray(long param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int extraout_w1;
  long lVar6;
  long in_x9;
  int *piVar7;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  int iVar8;
  long *unaff_x23;
  long *unaff_x24;
  int unaff_w25;
  undefined4 unaff_w26;
  undefined8 *unaff_x29;
  long in_stack_00000048;
  
  do {
    uVar1 = *(uint *)(param_2 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(param_2 + 0x18) = uVar1 + 1;
      *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x20) = unaff_w26;
    }
    else {
      FUN_04976584(param_2,unaff_w26,
                   *(undefined8 *)(*(long *)(*(long *)(in_x9 + 0x20) + 0xc0) + 0x70));
    }
    do {
      unaff_w25 = unaff_w25 + 1;
      if (*(int *)(unaff_x22 + 0x20) <= unaff_w25) {
        do {
          iVar8 = 0;
          while( true ) {
                    /* try { // try from 05296bc8 to 05396c2b has its CatchHandler @ 05296cd4 */
            lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x1d8);
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_03775678();
            }
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x1d8);
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_03775678();
            }
            if (**(long **)(lVar5 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            if (*(int *)(**(long **)(lVar5 + 0xb8) + 0x18) <= iVar8) break;
            lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x1d8);
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_03775678();
            }
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
                    /* try { // try from 05296c3c to 05396c7f has its CatchHandler @ 05296cd8 */
            lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x1d8);
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_03775678();
            }
            if (**(long **)(lVar5 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            uVar2 = FUN_04976294(**(long **)(lVar5 + 0xb8),iVar8,*unaff_x29);
            FUN_052c3440(unaff_x22,uVar2,
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x1e8));
            iVar8 = iVar8 + 1;
          }
          uVar3 = FUN_05e1f4a8(&stack0x00000030,
                               *(undefined8 *)
                                (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x100));
          unaff_x22 = in_stack_00000048;
          if ((uVar3 & 1) == 0) {
            FUN_05e1f5cc(&stack0x00000030,
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x108));
            return;
          }
          lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x1d8);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_03775678();
          }
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x1d8);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_03775678();
          }
          lVar5 = **(long **)(lVar5 + 0xb8);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          *(undefined4 *)(lVar5 + 0x18) = 0;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          unaff_x23 = (long *)FUN_052c1e24(unaff_x22,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x1e0))
          ;
          unaff_x24 = (long *)FUN_052c1e64(unaff_x22,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70));
        } while (*(int *)(unaff_x22 + 0x20) < 1);
        unaff_w25 = 0;
      }
      if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03775678(lVar5);
      }
      lVar6 = *unaff_x24;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar5) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_05296a68;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_0377596c(unaff_x24,lVar5,0);
LAB_05296a68:
      (*(code *)*puVar4)(unaff_x24,unaff_w25,puVar4[1]);
      if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar5 = *unaff_x23;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_07d95dc8) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_05296ad8;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_0377596c(unaff_x23,*(long *)PTR_DAT_07d95dc8,0);
LAB_05296ad8:
      unaff_w26 = (*(code *)*puVar4)(unaff_x23,unaff_w25,puVar4[1]);
    } while (unaff_w20 <= extraout_w1 + 10);
    (**(code **)(*unaff_x21 + 0x1b8))();
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x1d8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03775678();
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x1d8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03775678();
    }
    param_2 = **(long **)(lVar5 + 0xb8);
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    param_1 = *(long *)(param_2 + 0x10);
    in_x9 = *(long *)PTR_DAT_07d86c78;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
  } while( true );
}


