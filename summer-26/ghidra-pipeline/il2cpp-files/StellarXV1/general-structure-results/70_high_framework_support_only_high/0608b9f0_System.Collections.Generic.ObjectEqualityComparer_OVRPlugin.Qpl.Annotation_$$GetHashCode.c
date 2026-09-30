/*
FUNCTION_NAME: System.Collections.Generic.ObjectEqualityComparer<OVRPlugin.Qpl.Annotation>$$GetHashCode
ENTRY_POINT: 0608b9f0
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
System_Collections_Generic_ObjectEqualityComparer<OVRPlugin_Qpl_Annotation>__GetHashCode(void)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar9;
  long unaff_x21;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined1 uStack0000000000000034;
  long in_stack_00000038;
  undefined *puVar8;
  
  FUN_04077588(PTR_DAT_092a19c8);
  FUN_04077588(PTR_DAT_092b7070);
  *(undefined1 *)(unaff_x21 + 0xd44) = 1;
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uStack0000000000000034 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_040b1acc();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_040b1acc();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_040b1acc();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_040b1acc();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar3 != 0) {
    lVar4 = *(long *)(unaff_x20 + 0x20);
    uVar9 = *unaff_x19;
    uVar7 = unaff_x19[1];
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    uVar1 = FUN_06dc5c6c(lVar3,uVar9,uVar7,&stack0x00000034,
                         *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x1e0));
    lVar3 = *(long *)(in_stack_00000038 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc(lVar3);
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    if (**(long **)(lVar3 + 0xb8) != 0) {
      uVar2 = FUN_0578d69c(**(long **)(lVar3 + 0xb8),*unaff_x19,unaff_x19[1],
                           *(undefined8 *)PTR_DAT_092a19c8);
      if (((uVar1 | uVar2) & 1) == 0) {
        thunk_FUN_040dedf8(PTR_DAT_09289148);
        uVar9 = thunk_FUN_040b4b34();
        puVar8 = PTR_DAT_092ba9d0;
      }
      else {
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
        lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x28);
        if (lVar3 == 0) goto LAB_0608be04;
        uVar5 = FUN_06dd7ee4(lVar3,*unaff_x19,unaff_x19[1],*(undefined8 *)PTR_DAT_092ba9c8);
        if ((uVar5 & 1) == 0) {
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
          lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x30);
          if (lVar3 == 0) goto LAB_0608be04;
          uVar9 = *unaff_x19;
          uVar7 = unaff_x19[1];
          lVar4 = *(long *)(in_stack_00000038 + 0x20);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_040b1acc();
          }
          uVar5 = FUN_06dd7ee4(lVar3,uVar9,uVar7,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x1e8));
          if ((uVar5 & 1) == 0) {
            in_stack_00000028 = unaff_x19[1];
            in_stack_00000020 = *unaff_x19;
            lVar3 = *(long *)(in_stack_00000038 + 0x20);
            if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_040b1acc();
            }
            lVar3 = FUN_050e8034(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x228));
            if ((uVar1 & 1) == 0) {
              lVar4 = *(long *)(in_stack_00000038 + 0x20);
              if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_040b1acc();
              }
              lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
              if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_040b1acc();
              }
              if (*(int *)(lVar4 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
              }
              lVar4 = *(long *)(in_stack_00000038 + 0x20);
              if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_040b1acc();
              }
              lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
              if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_040b1acc();
              }
              lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x20);
              if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              uVar9 = *unaff_x19;
              uVar7 = unaff_x19[1];
              lVar6 = *(long *)(in_stack_00000038 + 0x20);
              if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                lVar6 = FUN_040b1acc();
              }
              FUN_06dd7cd8(lVar4,uVar9,uVar7,lVar3,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x238))
              ;
              if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
            }
            else {
              if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar4 = *(long *)(in_stack_00000038 + 0x20);
              if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_040b1acc();
              }
              FUN_0671d6e0(lVar3,&stack0x00000034,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x230));
            }
            if ((*(ushort *)(*(long *)(in_stack_00000038 + 0x20) + 0x135) & 1) == 0) {
              FUN_040b1acc();
            }
            uVar9 = *(undefined8 *)(lVar3 + 0x18);
            if (*(int *)(*(long *)PTR_DAT_092b7070 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            lVar3 = *(long *)(in_stack_00000038 + 0x20);
            if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_040b1acc();
            }
            FUN_0608c644(&stack0x00000020,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x220));
            return uVar9;
          }
          thunk_FUN_040dedf8(PTR_DAT_09289148);
          uVar9 = thunk_FUN_040b4b34();
          puVar8 = PTR_DAT_092ba9e0;
        }
        else {
          thunk_FUN_040dedf8(PTR_DAT_09289148);
          uVar9 = thunk_FUN_040b4b34();
          puVar8 = PTR_DAT_092ba9d8;
        }
      }
      uVar7 = thunk_FUN_040dedf8(puVar8);
      uVar9 = FUN_074d57ec(uVar7,uVar9,0);
      thunk_FUN_040dedf8(PTR_DAT_0929cb88);
      uVar7 = thunk_FUN_040b4efc();
      FUN_07679464(uVar7,uVar9,0);
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar7,in_stack_00000038);
    }
  }
LAB_0608be04:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


