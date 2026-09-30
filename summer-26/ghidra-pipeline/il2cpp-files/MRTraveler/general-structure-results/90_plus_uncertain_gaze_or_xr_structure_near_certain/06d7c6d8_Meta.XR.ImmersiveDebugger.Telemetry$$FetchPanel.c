/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$FetchPanel
ENTRY_POINT: 06d7c6d8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Telemetry__FetchPanel(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  long *plVar6;
  long *unaff_x21;
  long *plVar7;
  undefined8 uVar8;
  
  if (*unaff_x21 != **(long **)(param_1 + 0x758)) {
    unaff_x21 = (long *)0x0;
  }
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar2 = FUN_085dfaac(unaff_x21,0,0);
  if ((uVar2 & 1) == 0) {
    if (unaff_x21 != (long *)0x0) {
      *(int *)(unaff_x19 + 0x20) = (int)unaff_x21[4];
      *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)((long)unaff_x21 + 0x24);
      *(int *)(unaff_x19 + 0x28) = (int)unaff_x21[5];
      uVar4 = *(undefined8 *)((long)unaff_x21 + 0x2c);
      *(undefined8 *)(unaff_x19 + 0x34) = *(undefined8 *)((long)unaff_x21 + 0x34);
      *(undefined8 *)(unaff_x19 + 0x2c) = uVar4;
      *(long *)(unaff_x19 + 0x40) = unaff_x21[8];
      thunk_FUN_03d233cc();
      *(undefined1 *)(unaff_x19 + 0x4c) = *(undefined1 *)((long)unaff_x21 + 0x4c);
      puVar1 = PTR_DAT_08e8d750;
      lVar3 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8d750);
      uVar4 = DAT_018af438;
      uVar8 = NEON_fmov(0x3f800000,4);
      *(undefined8 *)(lVar3 + 0x10) = uVar8;
      *(undefined2 *)(lVar3 + 0x18) = 0x101;
      *(undefined1 *)(lVar3 + 0x1a) = 1;
      *(undefined8 *)(lVar3 + 0x2c) = uVar4;
      *(undefined4 *)(lVar3 + 0x34) = 0x13;
      FUN_07145224(lVar3,0);
      plVar7 = (long *)(unaff_x19 + 0x58);
      *plVar7 = lVar3;
      thunk_FUN_03d233cc(plVar7,lVar3);
      lVar3 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
      *(undefined8 *)(lVar3 + 0x10) = uVar8;
      *(undefined2 *)(lVar3 + 0x18) = 0x101;
      *(undefined1 *)(lVar3 + 0x1a) = 1;
      *(undefined8 *)(lVar3 + 0x2c) = uVar4;
      *(undefined4 *)(lVar3 + 0x34) = 0x13;
      FUN_07145224(lVar3,0);
      plVar6 = (long *)(unaff_x19 + 0x60);
      *plVar6 = lVar3;
      thunk_FUN_03d233cc(plVar6,lVar3);
      lVar3 = unaff_x21[0xb];
      if ((lVar3 != 0) && (lVar5 = *plVar7, lVar5 != 0)) {
        *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(lVar3 + 0x10);
        *(undefined1 *)(lVar5 + 0x18) = *(undefined1 *)(lVar3 + 0x18);
        *(undefined1 *)(lVar5 + 0x19) = *(undefined1 *)(lVar3 + 0x19);
        *(undefined1 *)(lVar5 + 0x1a) = *(undefined1 *)(lVar3 + 0x1a);
        *(undefined8 *)(lVar5 + 0x2c) = *(undefined8 *)(lVar3 + 0x2c);
        *(undefined4 *)(lVar5 + 0x34) = *(undefined4 *)(lVar3 + 0x34);
        *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)(lVar3 + 0x38);
        thunk_FUN_03d233cc();
        lVar3 = unaff_x21[0xc];
        if ((lVar3 != 0) && (lVar5 = *plVar6, lVar5 != 0)) {
          *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(lVar3 + 0x10);
          *(undefined1 *)(lVar5 + 0x18) = *(undefined1 *)(lVar3 + 0x18);
          *(undefined1 *)(lVar5 + 0x19) = *(undefined1 *)(lVar3 + 0x19);
          *(undefined1 *)(lVar5 + 0x1a) = *(undefined1 *)(lVar3 + 0x1a);
          *(undefined8 *)(lVar5 + 0x2c) = *(undefined8 *)(lVar3 + 0x2c);
          *(undefined4 *)(lVar5 + 0x34) = *(undefined4 *)(lVar3 + 0x34);
          *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)(lVar3 + 0x38);
          thunk_FUN_03d233cc();
          return;
        }
      }
    }
  }
  else {
    lVar3 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69770,5);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x18) != 0) {
        *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)PTR_DAT_08e8f420;
        thunk_FUN_03d233cc((undefined8 *)(lVar3 + 0x20));
        uVar4 = FUN_085e29cc();
        if (1 < *(uint *)(lVar3 + 0x18)) {
          *(undefined8 *)(lVar3 + 0x28) = uVar4;
          thunk_FUN_03d233cc((undefined8 *)(lVar3 + 0x28),uVar4);
          if (2 < *(uint *)(lVar3 + 0x18)) {
            *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)PTR_DAT_08e8f428;
            thunk_FUN_03d233cc((undefined8 *)(lVar3 + 0x30));
            uVar4 = FUN_085e29cc();
            if (3 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x38) = uVar4;
              thunk_FUN_03d233cc((undefined8 *)(lVar3 + 0x38),uVar4);
              if (4 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)PTR_DAT_08e8f418;
                thunk_FUN_03d233cc();
                uVar4 = FUN_06f74f38(lVar3,0);
                if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
                  thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
                }
                FUN_085a437c(uVar4,0);
                return;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


