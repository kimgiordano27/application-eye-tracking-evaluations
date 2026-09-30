/*
FUNCTION_NAME: System.ArraySegment<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 065ab5ec
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long System_ArraySegment<OVRPlugin_SpaceQueryResult>___ctor(ulong param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  undefined *puVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long in_stack_00000008;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_04980b34();
  }
  lVar6 = *(long *)(*(long *)(param_2 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_04980b34();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
                    /* try { // try from 065ab620 to 066ab68b has its CatchHandler @ 065ab620
                       catch() { ... } // from try @ 065ab620 with catch @ 065ab620
                       catch() { ... } // from try @ 065ab6e0 with catch @ 065ab620
                       catch() { ... } // from try @ 065ab764 with catch @ 065ab620 */
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_04980b34();
  }
  if (unaff_x22 != 0) {
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_04980b34();
    }
    puVar4 = PTR_DAT_0ac161d0;
    if (unaff_x20 != 0) {
      if (unaff_w21 < 0) {
        bVar5 = false;
      }
      else {
        lVar6 = *(long *)(unaff_x19 + 0x20);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_04980b34();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_04980b34();
        }
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_04980b34();
        }
        bVar5 = unaff_w21 <= *(int *)(unaff_x22 + 0x18);
      }
      FUN_092cbd18(bVar5,*(undefined8 *)puVar4,0,0);
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_04980b34();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_04980b34();
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_04980b34();
      }
      lVar6 = unaff_x20;
      if (*(int *)(unaff_x22 + 0x18) != 0) {
        lVar6 = *(long *)(unaff_x19 + 0x20);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_04980b34();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_04980b34();
        }
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_04980b34();
        }
        lVar6 = unaff_x22;
        if (*(int *)(unaff_x20 + 0x18) != 0) {
          lVar6 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_04980b34();
          }
          lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_04980b34();
          }
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          lVar6 = *(long *)(unaff_x19 + 0x20);
          uVar3 = *(ushort *)(lVar6 + 0x135);
          if ((uVar3 & 1) == 0) {
            FUN_04980b34();
            lVar6 = *(long *)(unaff_x19 + 0x20);
            uVar3 = *(ushort *)(lVar6 + 0x135);
          }
          iVar1 = *(int *)(unaff_x22 + 0x18);
          if ((uVar3 & 1) == 0) {
            FUN_04980b34();
            lVar6 = *(long *)(unaff_x19 + 0x20);
            uVar3 = *(ushort *)(lVar6 + 0x135);
          }
          iVar2 = *(int *)(unaff_x20 + 0x18);
          if ((uVar3 & 1) == 0) {
            lVar6 = FUN_04980b34();
          }
          lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0xb8);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_04980b34();
          }
          lVar6 = FUN_04947fd0(lVar6,iVar2 + iVar1);
          if (unaff_w21 != 0) {
            FUN_08da0170();
          }
          lVar7 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_04980b34();
          }
          lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_04980b34();
          }
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          lVar7 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            FUN_04980b34();
            lVar7 = *(long *)(unaff_x19 + 0x20);
          }
          if (*(int *)(unaff_x22 + 0x18) != unaff_w21) {
            if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_04980b34();
            }
            lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
            if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_04980b34();
            }
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_049a583c();
            }
            uVar3 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
            if ((uVar3 & 1) == 0) {
              FUN_04980b34();
              uVar3 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
            }
            if ((uVar3 & 1) == 0) {
              FUN_04980b34();
            }
            FUN_08d9f1fc();
            lVar7 = *(long *)(unaff_x19 + 0x20);
          }
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_04980b34();
          }
          lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_04980b34();
          }
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
            FUN_04980b34();
          }
          FUN_08d9f1fc();
          in_stack_00000008 = 0;
          if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
            FUN_04980b34();
          }
          in_stack_00000008 = lVar6;
          thunk_FUN_049ee3d8(&stack0x00000008,lVar6);
          lVar6 = in_stack_00000008;
        }
      }
      return lVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


