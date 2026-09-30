/*
FUNCTION_NAME: System.Collections.Generic.ObjectEqualityComparer<OVRPlugin.Qpl.Annotation>$$IndexOf
ENTRY_POINT: 0608ba70
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0608bec8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
System_Collections_Generic_ObjectEqualityComparer<OVRPlugin_Qpl_Annotation>__IndexOf
          (ulong param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000038;
  undefined *puVar7;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_040b1acc();
  }
  lVar9 = *(long *)(*(long *)(param_2 + 0xb8) + 8);
  if (lVar9 != 0) {
    lVar3 = *(long *)(unaff_x20 + 0x20);
    uVar8 = *unaff_x19;
    uVar6 = unaff_x19[1];
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    uVar1 = FUN_06dc5c6c(lVar9,uVar8,uVar6,&stack0x00000034,
                         *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x1e0));
    lVar9 = *(long *)(in_stack_00000038 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_040b1acc(lVar9);
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_040b1acc();
    }
    if (**(long **)(lVar9 + 0xb8) != 0) {
      uVar2 = FUN_0578d69c(**(long **)(lVar9 + 0xb8),*unaff_x19,unaff_x19[1],
                           *(undefined8 *)PTR_DAT_092a19c8);
      if (((uVar1 | uVar2) & 1) == 0) {
        thunk_FUN_040dedf8(PTR_DAT_09289148);
        uVar8 = thunk_FUN_040b4b34();
        puVar7 = PTR_DAT_092ba9d0;
      }
      else {
        lVar9 = *(long *)(in_stack_00000038 + 0x20);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_040b1acc();
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_040b1acc();
        }
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        lVar9 = *(long *)(in_stack_00000038 + 0x20);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_040b1acc();
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_040b1acc();
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x28);
        if (lVar9 == 0) goto LAB_0608be04;
        uVar4 = FUN_06dd7ee4(lVar9,*unaff_x19,unaff_x19[1],*(undefined8 *)PTR_DAT_092ba9c8);
        if ((uVar4 & 1) == 0) {
          lVar9 = *(long *)(in_stack_00000038 + 0x20);
          if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_040b1acc();
          }
          lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
          if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_040b1acc();
          }
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          lVar9 = *(long *)(in_stack_00000038 + 0x20);
          if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_040b1acc();
          }
          lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
          if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_040b1acc();
          }
          lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x30);
          if (lVar9 == 0) goto LAB_0608be04;
          uVar8 = *unaff_x19;
          uVar6 = unaff_x19[1];
          lVar3 = *(long *)(in_stack_00000038 + 0x20);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_040b1acc();
          }
          uVar4 = FUN_06dd7ee4(lVar9,uVar8,uVar6,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x1e8));
          if ((uVar4 & 1) == 0) {
            in_stack_00000028 = unaff_x19[1];
            in_stack_00000020 = *unaff_x19;
            lVar9 = *(long *)(in_stack_00000038 + 0x20);
            if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_040b1acc();
            }
            lVar9 = FUN_050e8034(*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x228));
            if ((uVar1 & 1) == 0) {
              lVar3 = *(long *)(in_stack_00000038 + 0x20);
              if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_040b1acc();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
              if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_040b1acc();
              }
              if (*(int *)(lVar3 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
              }
              lVar3 = *(long *)(in_stack_00000038 + 0x20);
              if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_040b1acc();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
              if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_040b1acc();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x20);
              if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              uVar8 = *unaff_x19;
              uVar6 = unaff_x19[1];
              lVar5 = *(long *)(in_stack_00000038 + 0x20);
              if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_040b1acc();
              }
              FUN_06dd7cd8(lVar3,uVar8,uVar6,lVar9,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x238))
              ;
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
            }
            else {
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar3 = *(long *)(in_stack_00000038 + 0x20);
              if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_040b1acc();
              }
              FUN_0671d6e0(lVar9,&stack0x00000034,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x230));
            }
            if ((*(ushort *)(*(long *)(in_stack_00000038 + 0x20) + 0x135) & 1) == 0) {
              FUN_040b1acc();
            }
            uVar8 = *(undefined8 *)(lVar9 + 0x18);
            if (*(int *)(*(long *)PTR_DAT_092b7070 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            lVar9 = *(long *)(in_stack_00000038 + 0x20);
            if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_040b1acc();
            }
            FUN_0608c644(&stack0x00000020,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x220));
            return uVar8;
          }
          thunk_FUN_040dedf8(PTR_DAT_09289148);
          uVar8 = thunk_FUN_040b4b34();
          puVar7 = PTR_DAT_092ba9e0;
        }
        else {
          thunk_FUN_040dedf8(PTR_DAT_09289148);
          uVar8 = thunk_FUN_040b4b34();
          puVar7 = PTR_DAT_092ba9d8;
        }
      }
      uVar6 = thunk_FUN_040dedf8(puVar7);
      uVar8 = FUN_074d57ec(uVar6,uVar8,0);
      thunk_FUN_040dedf8(PTR_DAT_0929cb88);
      uVar6 = thunk_FUN_040b4efc();
      FUN_07679464(uVar6,uVar8,0);
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar6,in_stack_00000038);
    }
  }
LAB_0608be04:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


