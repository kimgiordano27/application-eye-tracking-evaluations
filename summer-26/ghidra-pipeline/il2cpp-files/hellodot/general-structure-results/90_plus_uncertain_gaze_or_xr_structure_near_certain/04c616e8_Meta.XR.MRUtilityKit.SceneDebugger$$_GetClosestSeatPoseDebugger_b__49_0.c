/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$<GetClosestSeatPoseDebugger>b__49_0
ENTRY_POINT: 04c616e8
PROGRAM: hellodot-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04c61aa4) */

undefined8 Meta_XR_MRUtilityKit_SceneDebugger__<GetClosestSeatPoseDebugger>b__49_0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  long unaff_x21;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 in_stack_00000008;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7330);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7338);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8a48);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dac88);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cb5e0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d08);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7340);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7348);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7350);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7358);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7360);
  *(undefined1 *)(unaff_x21 + 0x9c2) = 1;
  in_stack_00000008 = 0;
  if ((*unaff_x19 != 0) && (lVar3 = FUN_054d8134(*unaff_x19,0), lVar3 != 0)) {
    uVar4 = FUN_054e9b94(lVar3,*(undefined8 *)PTR_DAT_065e7360,&stack0x00000008,0);
    uVar8 = in_stack_00000008;
    puVar1 = PTR_DAT_065e7350;
    uVar9 = 0;
    if ((uVar4 & 1) != 0) {
      lVar3 = *(long *)PTR_DAT_065e7350;
      lVar10 = *(long *)PTR_DAT_065e7358;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar3 = *(long *)puVar1;
      }
      lVar11 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
      if (lVar11 == 0) {
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
          lVar3 = *(long *)puVar1;
        }
        uVar9 = **(undefined8 **)(lVar3 + 0xb8);
        lVar11 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e7338);
        FUN_04a5701c(lVar11,uVar9,*(undefined8 *)PTR_DAT_065e7348,0);
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = lVar11;
      }
      plVar5 = (long *)FUN_033efdd0(uVar8,lVar11,*(undefined8 *)PTR_DAT_065e7330);
      if (plVar5 == (long *)0x0) goto LAB_04c61a9c;
      lVar3 = *plVar5;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_065dac88) {
            puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_04c618a8;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_02ce0a7c(plVar5,*(long *)PTR_DAT_065dac88,0);
LAB_04c618a8:
      plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
      puVar2 = PTR_DAT_065cb5e0;
      puVar1 = PTR_DAT_065c8d08;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      do {
        lVar3 = *plVar5;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_04c61918;
            }
            uVar4 = uVar4 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)FUN_02ce0a7c(plVar5,*(long *)puVar1,0);
LAB_04c61918:
        uVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar4 & 1) == 0) {
          uVar9 = 0;
          goto joined_r0x04c61a18;
        }
        lVar3 = *plVar5;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_04c61974;
            }
            uVar4 = uVar4 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)FUN_02ce0a7c(plVar5,*(long *)puVar2,0);
LAB_04c61974:
        lVar3 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        uVar4 = FUN_04db8e3c(lVar3,lVar10,0);
      } while ((uVar4 & 1) == 0);
      uVar9 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e71f8);
      FUN_04f7383c(uVar9,0);
      *(undefined8 *)(unaff_x20 + 0x58) = uVar9;
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      uVar9 = FUN_04dbd134(lVar3,*(undefined4 *)(lVar10 + 0x10),0);
      *(undefined8 *)(unaff_x20 + 0x50) = uVar9;
      uVar8 = *(undefined8 *)(unaff_x20 + 0x58);
      uVar9 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e7340);
      FUN_04c278d8(uVar9,uVar8,*(undefined8 *)PTR_DAT_065e7328,0);
joined_r0x04c61a18:
      if (plVar5 != (long *)0x0) {
        lVar3 = *plVar5;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_065c8a48) {
              puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_04c61a70;
            }
            uVar4 = uVar4 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)FUN_02ce0a7c(plVar5,*(long *)PTR_DAT_065c8a48,0);
LAB_04c61a70:
        (*(code *)*puVar6)(plVar5,puVar6[1]);
      }
    }
    return uVar9;
  }
LAB_04c61a9c:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


