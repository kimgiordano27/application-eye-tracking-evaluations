/*
FUNCTION_NAME: FUN_0155fbf8
ENTRY_POINT: 0155fbf8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_0155fbf8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((DAT_03777bdc & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_473);
    thunk_FUN_00d48444(
                      Method_System_Collections_ObjectModel_ReadOnlyCollection<ElementInit>_get_Count__
                      );
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_45_0_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Mesh_MeshData_GetVertexData<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_76>__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f14b8);
    DAT_03777bdc = 1;
  }
  puVar3 = StringLiteral_473;
  puVar2 = 
  Method_UnityEngine_Mesh_MeshData_GetVertexData<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_76>__
  ;
  uStack_68 = 0;
  local_60 = 0;
  local_70 = 0;
  if (*(char *)(param_1 + 0x28) != '\0') {
    lVar5 = *(long *)(param_1 + 0x50);
    if (lVar5 == 0) goto LAB_0155fec0;
    if (*(int *)(lVar5 + 0x18) != 0) {
      FUN_0132138c(lVar5,0,&local_88,
                   *(undefined8 *)
                    Method_UnityEngine_Mesh_MeshData_GetVertexData<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_76>__
                  );
      lVar5 = CONCAT44(uStack_84,local_88);
      uVar6 = FUN_01540ae4(*(undefined8 *)(param_1 + 0x20),0,0);
      if (lVar5 != 0) {
        *(undefined8 *)(lVar5 + 0x30) = uVar6;
        if (*(long *)(param_1 + 0x50) != 0) {
          FUN_0132138c(*(long *)(param_1 + 0x50),0,&local_88,*(undefined8 *)puVar2);
          if (*(long *)(param_1 + 0x58) != 0) {
            lVar5 = CONCAT44(uStack_84,local_88);
            local_88 = 0;
            uVar4 = FUN_012ddcec(*(long *)(param_1 + 0x58),&local_88,*(undefined8 *)puVar3);
            if (lVar5 != 0) {
              FUN_02689f9c(lVar5,uVar4 & 1,0);
              return;
            }
          }
        }
      }
      goto LAB_0155fec0;
    }
  }
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (lVar5 = FUN_0153fc24(*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x18),0), lVar5 != 0)
     ) {
    iVar9 = *(int *)(lVar5 + 0x18);
    if (iVar9 == 0) {
      return;
    }
    lVar7 = *(long *)(param_1 + 0x50);
    if (lVar7 != 0) {
      while (puVar1 = PTR_DAT_033f14b8, *(int *)(lVar7 + 0x18) < iVar9) {
        FUN_0155fb54(param_1);
        lVar7 = *(long *)(param_1 + 0x50);
        if (lVar7 == 0) goto LAB_0155fec0;
        iVar9 = *(int *)(lVar5 + 0x18);
      }
      if (iVar9 < 1) {
        iVar9 = 0;
      }
      else {
        iVar9 = 0;
        do {
          FUN_0132138c(lVar5,iVar9,&local_88,*(undefined8 *)puVar1);
          local_70 = CONCAT44(uStack_84,local_88);
          uStack_68 = uStack_80;
          local_60 = local_78;
          uVar8 = FUN_01540758(&local_70,0);
          if (*(long *)(param_1 + 0x50) == 0) goto LAB_0155fec0;
          FUN_0132138c(*(long *)(param_1 + 0x50),iVar9,&local_88,*(undefined8 *)puVar2);
          lVar7 = CONCAT44(uStack_84,local_88);
          if ((uVar8 & 1) == 0) {
            if (lVar7 == 0) goto LAB_0155fec0;
            uVar4 = 0;
          }
          else {
            uVar6 = FUN_01540ae4(*(undefined8 *)(param_1 + 0x20),local_70,0);
            if (lVar7 == 0) goto LAB_0155fec0;
            *(undefined8 *)(lVar7 + 0x30) = uVar6;
            if (*(long *)(param_1 + 0x50) == 0) goto LAB_0155fec0;
            FUN_0132138c(*(long *)(param_1 + 0x50),iVar9,&local_88,*(undefined8 *)puVar2);
            if (*(long *)(param_1 + 0x58) == 0) goto LAB_0155fec0;
            lVar7 = CONCAT44(uStack_84,local_88);
            local_88 = (undefined4)local_60;
            uVar4 = FUN_012ddcec(*(long *)(param_1 + 0x58),&local_88,*(undefined8 *)puVar3);
            if (lVar7 == 0) goto LAB_0155fec0;
          }
          FUN_02689f9c(lVar7,uVar4 & 1,0);
          iVar9 = iVar9 + 1;
        } while (iVar9 < *(int *)(lVar5 + 0x18));
        lVar7 = *(long *)(param_1 + 0x50);
        if (lVar7 == 0) goto LAB_0155fec0;
      }
      do {
        if (*(int *)(lVar7 + 0x18) <= iVar9) {
          return;
        }
        FUN_0132138c(lVar7,iVar9,&local_88,*(undefined8 *)puVar2);
        if (CONCAT44(uStack_84,local_88) == 0) break;
        uVar8 = FUN_02689f60(CONCAT44(uStack_84,local_88),0);
        if ((uVar8 & 1) == 0) {
          return;
        }
        if (*(long *)(param_1 + 0x50) == 0) break;
        FUN_0132138c(*(long *)(param_1 + 0x50),iVar9,&local_88,*(undefined8 *)puVar2);
        if (CONCAT44(uStack_84,local_88) == 0) break;
        FUN_02689f9c(CONCAT44(uStack_84,local_88),0,0);
        lVar7 = *(long *)(param_1 + 0x50);
        iVar9 = iVar9 + 1;
      } while (lVar7 != 0);
    }
  }
LAB_0155fec0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


