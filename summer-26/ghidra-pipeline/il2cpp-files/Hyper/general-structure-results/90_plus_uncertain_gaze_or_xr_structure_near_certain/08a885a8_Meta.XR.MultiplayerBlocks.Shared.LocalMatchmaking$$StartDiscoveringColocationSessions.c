/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$StartDiscoveringColocationSessions
ENTRY_POINT: 08a885a8
PROGRAM: Hyper-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__StartDiscoveringColocationSessions(void)

{
  ulong uVar1;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined1 auVar2 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  _in_stack_00000020 = FUN_08df3b4c(&stack0x00000010,0);
  if (*(int *)(*(long *)PTR_DAT_0ac3f8b8 + 0xe4) == 0) {
    thunk_FUN_049a583c(*(long *)PTR_DAT_0ac3f8b8);
  }
  uVar1 = FUN_086abadc(&stack0x00000020,0);
  if ((uVar1 & 1) == 0) {
    *unaff_x19 = 2;
    *(undefined1 (*) [16])(unaff_x19 + 0xe) = _in_stack_00000020;
    thunk_FUN_049ee3d8(unaff_x19 + 0xe,0);
    FUN_05a7151c(unaff_x19 + 2,&stack0x00000020);
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_0ac3f8b8 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    FUN_086abc1c(&stack0x00000020,0);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    *(undefined1 *)(unaff_x20 + 0x128) = 1;
    _in_stack_00000010 = FUN_08a7f07c();
    if (*(int *)(*(long *)PTR_DAT_0ac42dc8 + 0xe4) == 0) {
      thunk_FUN_049a583c(*(long *)PTR_DAT_0ac42dc8);
    }
    auVar2 = FUN_08df3b4c(&stack0x00000010,0);
    _in_stack_00000020 = auVar2;
    if (*(int *)(*(long *)PTR_DAT_0ac3f8b8 + 0xe4) == 0) {
      thunk_FUN_049a583c(*(long *)PTR_DAT_0ac3f8b8);
    }
    uVar1 = FUN_086abadc(&stack0x00000020,0);
    if ((uVar1 & 1) == 0) {
      *unaff_x19 = 3;
      *(undefined1 (*) [16])(unaff_x19 + 0xe) = _in_stack_00000020;
      thunk_FUN_049ee3d8(unaff_x19 + 0xe,0);
      FUN_05a7151c(unaff_x19 + 2,&stack0x00000020);
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_0ac3f8b8 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_086abc1c(&stack0x00000020,0);
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      auVar2 = FUN_08a7f4e4();
      _in_stack_00000010 = auVar2;
      if (*(int *)(*(long *)PTR_DAT_0ac42dc8 + 0xe4) == 0) {
        thunk_FUN_049a583c(*(long *)PTR_DAT_0ac42dc8);
      }
      auVar2 = FUN_08df3b4c(&stack0x00000010,0);
      _in_stack_00000020 = auVar2;
      uVar1 = FUN_086abadc(&stack0x00000020,0);
      if ((uVar1 & 1) == 0) {
        *unaff_x19 = 4;
        *(undefined1 (*) [16])(unaff_x19 + 0xe) = _in_stack_00000020;
        thunk_FUN_049ee3d8(unaff_x19 + 0xe,0);
        FUN_05a7151c(unaff_x19 + 2,&stack0x00000020);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_0ac3f8b8 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        FUN_086abc1c(&stack0x00000020,0);
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        auVar2 = FUN_08a7f5f8();
        _in_stack_00000010 = auVar2;
        if (*(int *)(*(long *)PTR_DAT_0ac42dc8 + 0xe4) == 0) {
          thunk_FUN_049a583c(*(long *)PTR_DAT_0ac42dc8);
        }
        auVar2 = FUN_08df3b4c(&stack0x00000010,0);
        _in_stack_00000020 = auVar2;
        uVar1 = FUN_086abadc(&stack0x00000020,0);
        if ((uVar1 & 1) == 0) {
          *unaff_x19 = 5;
          *(undefined1 (*) [16])(unaff_x19 + 0xe) = _in_stack_00000020;
          thunk_FUN_049ee3d8(unaff_x19 + 0xe,0);
          FUN_05a7151c(unaff_x19 + 2,&stack0x00000020);
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_0ac3f8b8 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          FUN_086abc1c(&stack0x00000020,0);
          if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          auVar2 = FUN_08a7fb40();
          _in_stack_00000010 = auVar2;
          if (*(int *)(*(long *)PTR_DAT_0ac42dc8 + 0xe4) == 0) {
            thunk_FUN_049a583c(*(long *)PTR_DAT_0ac42dc8);
          }
          auVar2 = FUN_08df3b4c(&stack0x00000010,0);
          _in_stack_00000020 = auVar2;
          uVar1 = FUN_086abadc(&stack0x00000020,0);
          if ((uVar1 & 1) == 0) {
            *unaff_x19 = 6;
            *(undefined1 (*) [16])(unaff_x19 + 0xe) = _in_stack_00000020;
            thunk_FUN_049ee3d8(unaff_x19 + 0xe,0);
            FUN_05a7151c(unaff_x19 + 2,&stack0x00000020);
          }
          else {
            if (*(int *)(*(long *)PTR_DAT_0ac3f8b8 + 0xe4) == 0) {
              thunk_FUN_049a583c();
            }
            FUN_086abc1c(&stack0x00000020,0);
            if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0494818c();
            }
            auVar2 = FUN_08a7f70c();
            _in_stack_00000010 = auVar2;
            if (*(int *)(*(long *)PTR_DAT_0ac42dc8 + 0xe4) == 0) {
              thunk_FUN_049a583c(*(long *)PTR_DAT_0ac42dc8);
            }
            auVar2 = FUN_08df3b4c(&stack0x00000010,0);
            _in_stack_00000020 = auVar2;
            uVar1 = FUN_086abadc(&stack0x00000020,0);
            if ((uVar1 & 1) == 0) {
              *unaff_x19 = 7;
              *(undefined1 (*) [16])(unaff_x19 + 0xe) = _in_stack_00000020;
              thunk_FUN_049ee3d8(unaff_x19 + 0xe,0);
              FUN_05a7151c(unaff_x19 + 2,&stack0x00000020);
            }
            else {
              if (*(int *)(*(long *)PTR_DAT_0ac3f8b8 + 0xe4) == 0) {
                thunk_FUN_049a583c();
              }
              FUN_086abc1c(&stack0x00000020,0);
              if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0494818c();
              }
              auVar2 = FUN_08a7f3d0();
              _in_stack_00000010 = auVar2;
              if (*(int *)(*(long *)PTR_DAT_0ac42dc8 + 0xe4) == 0) {
                thunk_FUN_049a583c(*(long *)PTR_DAT_0ac42dc8);
              }
              auVar2 = FUN_08df3b4c(&stack0x00000010,0);
              _in_stack_00000020 = auVar2;
              uVar1 = FUN_086abadc(&stack0x00000020,0);
              if ((uVar1 & 1) == 0) {
                *unaff_x19 = 8;
                *(undefined1 (*) [16])(unaff_x19 + 0xe) = _in_stack_00000020;
                thunk_FUN_049ee3d8(unaff_x19 + 0xe,0);
                FUN_05a7151c(unaff_x19 + 2,&stack0x00000020);
              }
              else {
                if (*(int *)(*(long *)PTR_DAT_0ac3f8b8 + 0xe4) == 0) {
                  thunk_FUN_049a583c();
                }
                FUN_086abc1c(&stack0x00000020,0);
                if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0494818c();
                }
                auVar2 = FUN_08a80b7c();
                _in_stack_00000010 = auVar2;
                if (*(int *)(*(long *)PTR_DAT_0ac42dc8 + 0xe4) == 0) {
                  thunk_FUN_049a583c(*(long *)PTR_DAT_0ac42dc8);
                }
                auVar2 = FUN_08df3b4c(&stack0x00000010,0);
                _in_stack_00000020 = auVar2;
                uVar1 = FUN_086abadc(&stack0x00000020,0);
                if ((uVar1 & 1) == 0) {
                  *unaff_x19 = 9;
                  *(undefined1 (*) [16])(unaff_x19 + 0xe) = _in_stack_00000020;
                  thunk_FUN_049ee3d8(unaff_x19 + 0xe,0);
                  FUN_05a7151c(unaff_x19 + 2,&stack0x00000020);
                }
                else {
                  if (*(int *)(*(long *)PTR_DAT_0ac3f8b8 + 0xe4) == 0) {
                    thunk_FUN_049a583c();
                  }
                  FUN_086abc1c(&stack0x00000020,0);
                  *unaff_x19 = 0xfffffffe;
                  FUN_08c7f6c8(unaff_x19 + 2,0);
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}


