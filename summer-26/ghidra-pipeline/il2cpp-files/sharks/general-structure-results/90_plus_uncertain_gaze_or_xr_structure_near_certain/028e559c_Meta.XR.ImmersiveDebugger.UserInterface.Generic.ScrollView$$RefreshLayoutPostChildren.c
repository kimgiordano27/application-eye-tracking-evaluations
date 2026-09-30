/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ScrollView$$RefreshLayoutPostChildren
ENTRY_POINT: 028e559c
PROGRAM: sharks-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ScrollView__RefreshLayoutPostChildren(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 *unaff_x21;
  long in_stack_00000018;
  long in_stack_00000028;
  
  lVar1 = FUN_0185daa4();
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x20);
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x20);
    uVar4 = *unaff_x21;
    uVar5 = unaff_x21[1];
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    uVar3 = FUN_02171fa4(lVar1,uVar4,uVar5,&stack0x00000028,
                         *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0xb0));
    lVar1 = in_stack_00000028;
    if ((uVar3 & 1) == 0) {
      lVar1 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0185daa4();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0185daa4();
      }
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      lVar1 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0185daa4();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0185daa4();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x18);
      if (lVar1 != 0) {
        lVar2 = *(long *)(unaff_x20 + 0x20);
        uVar4 = *unaff_x21;
        uVar5 = unaff_x21[1];
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0185daa4();
        }
        uVar3 = FUN_02171fa4(lVar1,uVar4,uVar5,&stack0x00000018,
                             *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0xd0));
        lVar1 = in_stack_00000018;
        if ((uVar3 & 1) == 0) {
          lVar1 = *(long *)(unaff_x20 + 0x20);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_0185daa4();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_0185daa4();
          }
          if (*(int *)(lVar1 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
            FUN_0185daa4();
          }
          uVar3 = FUN_028e590c();
          if ((uVar3 & 1) == 0) {
            thunk_FUN_01851c08(PTR_DAT_037f9268);
            thunk_FUN_018617ec();
            thunk_FUN_01851c08(PTR_DAT_037fb618);
            uVar4 = FUN_02a50b00();
            thunk_FUN_01851c08(PTR_DAT_037f8d50);
            uVar5 = thunk_FUN_01861bbc();
            FUN_02bcf6b4(uVar5,uVar4);
                    /* WARNING: Subroutine does not return */
            FUN_017fc474(uVar5);
          }
          lVar1 = *(long *)(unaff_x20 + 0x20);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_0185daa4();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_0185daa4();
          }
          if (*(int *)(lVar1 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          lVar1 = *(long *)(unaff_x20 + 0x20);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_0185daa4();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_0185daa4();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x30);
          if (lVar1 != 0) {
            lVar2 = *(long *)(unaff_x20 + 0x20);
            uVar4 = *unaff_x21;
            uVar5 = unaff_x21[1];
            if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
              lVar2 = FUN_0185daa4();
            }
            uVar3 = FUN_02171fa4(lVar1,uVar4,uVar5,&stack0x00000010,
                                 *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0xf8));
            if ((uVar3 & 1) == 0) {
              lVar1 = *(long *)(unaff_x20 + 0x20);
              if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                lVar1 = FUN_0185daa4();
              }
              lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
              if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                lVar1 = FUN_0185daa4();
              }
              if (*(int *)(lVar1 + 0xe0) == 0) {
                thunk_FUN_01843fdc();
              }
              lVar1 = *(long *)(unaff_x20 + 0x20);
              if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                lVar1 = FUN_0185daa4();
              }
              lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
              if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                lVar1 = FUN_0185daa4();
              }
              lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x10);
              if (lVar1 != 0) {
                FUN_02170834(lVar1,*unaff_x21,unaff_x21[1]);
                if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
                  FUN_0185daa4();
                }
                FUN_028e5b50();
                return;
              }
            }
            else {
              lVar1 = FUN_02afcf34();
              if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02afcff4(lVar1,0);
              }
            }
          }
        }
        else if (in_stack_00000018 != 0) {
          if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
            FUN_0185daa4();
          }
          FUN_01de6838(lVar1);
          return;
        }
      }
    }
    else if (in_stack_00000028 != 0) {
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      FUN_01d226b8(lVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


