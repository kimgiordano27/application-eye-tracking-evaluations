/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.Utilities$$GetGlobalMeshFromAnchorData
ENTRY_POINT: 014a7bf8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_10;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


void Meta_XR_MRUtilityKit_Utilities__GetGlobalMeshFromAnchorData(void)

{
  char cVar1;
  undefined *puVar2;
  int *piVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  
  if (unaff_x19 == (long *)0x0) {
    return;
  }
  if ((*(byte *)(**(long **)(*(long *)(*(long *)StringLiteral_6602 + 0x20) + 0xc0) + 0x132) & 1) ==
      0) {
    FUN_00d5941c();
  }
  piVar3 = (int *)thunk_FUN_00d32ed4();
  if (*piVar3 != 1) {
    return;
  }
  uVar4 = FUN_014f4d4c();
  if ((uVar4 & 1) != 0) {
    return;
  }
  lVar5 = (**(code **)(*unaff_x20 + 0x548))();
  if (lVar5 != 0) {
    if (*(long *)(lVar5 + 0x100) == 0) {
      return;
    }
    lVar5 = FUN_014a7f50();
    lVar6 = (**(code **)(*unaff_x20 + 0x548))();
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x100) != 0)) {
      FUN_013dfa68(*(long *)(lVar6 + 0x100),lVar5,
                   *(undefined8 *)Method_System_Dynamic_ExpandoObject_KeyCollection_Add__);
      uVar4 = FUN_014a7068();
      if (((uVar4 & 1) != 0) &&
         (lVar6 = FUN_014a7fc4(),
         puVar2 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_TypeInfo,
         lVar6 != 0)) {
        plVar10 = (long *)unaff_x20[8];
        if (plVar10 == (long *)0x0) goto LAB_014a7f4c;
        lVar8 = *plVar10;
        uVar4 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar4 != 0) {
          piVar3 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar3 + -2) ==
                *(long *)System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_TypeInfo) {
              puVar7 = (undefined8 *)(lVar8 + (long)(*piVar3 + 1) * 0x10 + 0x138);
              goto LAB_014a7d30;
            }
            uVar4 = uVar4 - 1;
            piVar3 = piVar3 + 4;
          } while (uVar4 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_00d59724(plVar10,*(long *)
                                       System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_TypeInfo
                              ,1);
LAB_014a7d30:
        (*(code *)*puVar7)(plVar10);
        plVar10 = (long *)unaff_x20[8];
        if (plVar10 == (long *)0x0) goto LAB_014a7f4c;
        lVar9 = *plVar10;
        lVar8 = *(long *)puVar2;
        uVar4 = (ulong)*(ushort *)(lVar9 + 0x12a);
        uVar11 = *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoWriteRawValueAsync>d__121>__
        ;
        if (uVar4 != 0) {
          piVar3 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar3 + -2) == lVar8) {
              puVar7 = (undefined8 *)(lVar9 + (long)(*piVar3 + 3) * 0x10 + 0x138);
              goto LAB_014a7da4;
            }
            uVar4 = uVar4 - 1;
            piVar3 = piVar3 + 4;
          } while (uVar4 != 0);
        }
        puVar7 = (undefined8 *)FUN_00d59724(plVar10,lVar8,3);
LAB_014a7da4:
        (*(code *)*puVar7)(plVar10,uVar11,lVar5,puVar7[1]);
        plVar10 = (long *)unaff_x20[8];
        if (plVar10 == (long *)0x0) goto LAB_014a7f4c;
        lVar9 = *plVar10;
        lVar8 = *(long *)puVar2;
        uVar4 = (ulong)*(ushort *)(lVar9 + 0x12a);
        uVar11 = *(undefined8 *)UnityEngine_Rendering_AtlasAllocatorDynamic_TypeInfo;
        if (uVar4 != 0) {
          piVar3 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar3 + -2) == lVar8) {
              puVar7 = (undefined8 *)(lVar9 + (long)(*piVar3 + 3) * 0x10 + 0x138);
              goto LAB_014a7e1c;
            }
            uVar4 = uVar4 - 1;
            piVar3 = piVar3 + 4;
          } while (uVar4 != 0);
        }
        puVar7 = (undefined8 *)FUN_00d59724(plVar10,lVar8,3);
LAB_014a7e1c:
        (*(code *)*puVar7)(plVar10,uVar11);
        if ((unaff_x20[7] == 0) || (plVar10 = (long *)unaff_x20[0xb], plVar10 == (long *)0x0))
        goto LAB_014a7f4c;
        lVar8 = *plVar10;
        lVar9 = unaff_x20[8];
        uVar11 = *(undefined8 *)(lVar6 + 0x20);
        cVar1 = *(char *)(unaff_x20[7] + 0xd0);
        uVar12 = *(undefined4 *)(lVar6 + 0x28);
        uVar4 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar4 != 0) {
          piVar3 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar3 + -2) == *(long *)StringLiteral_6575) {
              puVar7 = (undefined8 *)(lVar8 + (long)(*piVar3 + 2) * 0x10 + 0x138);
              goto LAB_014a7ea8;
            }
            uVar4 = uVar4 - 1;
            piVar3 = piVar3 + 4;
          } while (uVar4 != 0);
        }
        puVar7 = (undefined8 *)FUN_00d59724(plVar10,*(long *)StringLiteral_6575,2);
LAB_014a7ea8:
        (*(code *)*puVar7)(uVar12,plVar10,lVar9,uVar11,cVar1 != '\0',1,puVar7[1]);
      }
      puVar2 = Method_System_Threading_Tasks_Task_FromResult<byte[]>__;
      if (lVar5 != 0) {
        if (*(char *)(lVar5 + 0x20) == '\0') {
          return;
        }
        if (*(int *)(*(long *)StringLiteral_720 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_014de834(*(undefined8 *)puVar2,0);
                    /* WARNING: Could not recover jumptable at 0x014a7f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*unaff_x19 + 0x478))();
        return;
      }
    }
  }
LAB_014a7f4c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


