/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.DestructibleGlobalMesh$$GetHashCode
ENTRY_POINT: 04c35d4c
PROGRAM: hellodot-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_DestructibleGlobalMesh__GetHashCode(long param_1)

{
  undefined *puVar1;
  undefined2 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long *plVar9;
  long *unaff_x23;
  undefined2 uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  plVar9 = *(long **)(unaff_x19 + 8);
  uStack000000000000000c = 0;
  FUN_03c80878(&stack0x0000000c,0,**(undefined8 **)(param_1 + 0x870));
  uVar2 = uStack000000000000000c;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar6 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065e6558) {
        puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
        goto LAB_04c35de0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_065e6558,5);
LAB_04c35de0:
  (*(code *)*puVar3)(plVar9,uVar2,puVar3[1]);
  lVar6 = FUN_04c35988();
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  _in_stack_00000010 = FUN_0404bcb8(lVar6,0,*(undefined8 *)PTR_DAT_065e1700);
  uVar7 = FUN_044a8fc8(&stack0x00000010,*(undefined8 *)PTR_DAT_065e16e8);
  if ((uVar7 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined1 (*) [16])(unaff_x19 + 10) = _in_stack_00000010;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_030afc04(unaff_x19 + 2,&stack0x00000010);
  }
  else {
    uVar4 = FUN_044a9014(&stack0x00000010,*(undefined8 *)PTR_DAT_065e16e0);
    lVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e54a8);
    FUN_054e1c10(lVar6,uVar4,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar5 = FUN_054d80d0(lVar6,0);
    uVar4 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e5f18);
    System_Xml_XmlEncodedRawTextWriter__FlushBuffer(uVar4,*(undefined8 *)PTR_DAT_065e6560,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    FUN_054db260(lVar5,uVar4,0);
    *unaff_x19 = 0xfffffffe;
    puVar1 = PTR_DAT_065e6550;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_04266690(unaff_x19 + 2,lVar6,*(undefined8 *)puVar1);
  }
  return;
}


