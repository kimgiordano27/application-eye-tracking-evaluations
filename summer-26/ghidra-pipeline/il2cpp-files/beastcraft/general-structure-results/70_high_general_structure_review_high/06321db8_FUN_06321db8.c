/*
FUNCTION_NAME: FUN_06321db8
ENTRY_POINT: 06321db8
PROGRAM: beastcraft-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3
*/


uint FUN_06321db8(long param_1,undefined4 param_2,ulong param_3,uint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  undefined8 uStack_58;
  
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 06321db4 with catch @ 06321db8
                       try { // try from 06321db8 to 06421ddb has its CatchHandler @ 06321ca0 */
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 06321db0 with catch @ 06321dbc
                        */
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 06321d24 with catch @ 06321dc0
                        */
  if ((bRam0000000006e9b610 & 1) == 0) {
    FUN_02e3ca1c(System_Data_SerializationFormat_TypeInfo);
    FUN_02e3ca1c(Best_HTTP_SecureProtocol_Org_BouncyCastle_Math_EC_Custom_Sec_SecT283Field_TypeInfo)
    ;
    FUN_02e3ca1c(PTR_DAT_06a3f8d0);
    FUN_02e3ca1c(PTR_DAT_06a3f8d8);
    FUN_02e3ca1c(PTR_DAT_06a3f918);
    FUN_02e3ca1c(PTR_DAT_06a3f910);
    FUN_02e3ca1c(UnityEngine_UIElements_SerializedVirtualizationData_TypeInfo);
    FUN_02e3ca1c(Unity_Services_Authentication_SerializerSettings_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a2ed80);
    bRam0000000006e9b610 = 1;
  }
  lVar7 = *(long *)(param_1 + 0x130);
  uStack_58 = 0;
  if (lVar7 == 0) {
    FUN_0631d174(param_1);
    lVar7 = *(long *)(param_1 + 0x130);
    if (lVar7 != 0)
    goto UnityEngine_UIElements_UIR_MeshGenerator_RectangleParams__ApplyPackingRotation;
  }
  else {
UnityEngine_UIElements_UIR_MeshGenerator_RectangleParams__ApplyPackingRotation:
    uVar8 = FUN_04e88098(lVar7,param_2,*(undefined8 *)System_Data_SerializationFormat_TypeInfo);
    if ((uVar8 & 1) != 0) {
      uVar5 = 1;
      goto LAB_063220c8;
    }
    if (((param_4 & 1) == 0) || (1 < *(int *)(param_1 + 0xa8) - 1U)) {
      if ((param_3 & 1) == 0) goto LAB_063220c4;
    }
    else {
      uVar5 = FUN_063220e8(param_1,param_2,0,400,&uStack_58,1);
      if (((uVar5 & 1) != 0) || ((param_3 & 1) == 0)) goto LAB_063220c8;
    }
    puVar3 = Best_HTTP_SecureProtocol_Org_BouncyCastle_Math_EC_Custom_Sec_SecT283Field_TypeInfo;
    lVar7 = *(long *)
             Best_HTTP_SecureProtocol_Org_BouncyCastle_Math_EC_Custom_Sec_SecT283Field_TypeInfo;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      lVar7 = *(long *)puVar3;
    }
    lVar11 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x68);
    if (lVar11 == 0) {
      uVar10 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a3f910);
      FUN_052ce838(uVar10,*(undefined8 *)PTR_DAT_06a3f918);
      lVar7 = *(long *)puVar3;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
        lVar7 = *(long *)puVar3;
      }
      puVar9 = (undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x68);
      *puVar9 = uVar10;
      thunk_FUN_02ee2be8(puVar9,uVar10);
    }
    else {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
        lVar11 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x68);
        if (lVar11 == 0) goto LAB_063220c0;
      }
      FUN_052ceedc(lVar11,*(undefined8 *)PTR_DAT_06a3f8d8);
    }
    lVar7 = *(long *)puVar3;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      lVar7 = *(long *)puVar3;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x68);
    uVar6 = FUN_0626d24c(param_1,0);
    puVar2 = PTR_DAT_06a3f8d0;
    if (lVar7 == 0) {
LAB_063220c0:
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    FUN_052cfa78(lVar7,uVar6,*(undefined8 *)PTR_DAT_06a3f8d0);
    puVar4 = Unity_Services_Authentication_SerializerSettings_TypeInfo;
    puVar1 = PTR_DAT_06a2ed80;
    lVar7 = *(long *)(param_1 + 0x180);
    if ((lVar7 != 0) && (0 < *(int *)(lVar7 + 0x18))) {
      iVar12 = 0;
      do {
        if (*(int *)(lVar7 + 0x18) <= iVar12) goto LAB_063220c4;
        uVar10 = FUN_03f2b33c(lVar7,iVar12,*(undefined8 *)puVar4);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02e9a04c(*(long *)puVar1);
        }
        uVar8 = FUN_06267b6c(uVar10,0,0);
        if ((uVar8 & 1) == 0) goto LAB_063220c4;
        if ((*(long *)(param_1 + 0x180) == 0) ||
           (lVar7 = FUN_03f2b33c(*(long *)(param_1 + 0x180),iVar12,*(undefined8 *)puVar4),
           lVar7 == 0)) break;
        uVar6 = FUN_0626d24c(lVar7,0);
        lVar11 = *(long *)puVar3;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02e9a04c(lVar11);
          lVar11 = *(long *)puVar3;
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x68);
        if (lVar11 == 0) break;
        uVar8 = FUN_052cfa78(lVar11,uVar6,*(undefined8 *)puVar2);
        if ((uVar8 & 1) != 0) {
          uVar5 = 1;
          uVar8 = FUN_06322450(lVar7,param_2,0,400,1,param_4 & 1);
          if ((uVar8 & 1) != 0) goto LAB_063220c8;
        }
        lVar7 = *(long *)(param_1 + 0x180);
        iVar12 = iVar12 + 1;
      } while (lVar7 != 0);
      goto LAB_063220c0;
    }
  }
LAB_063220c4:
  uVar5 = 0;
LAB_063220c8:
  return uVar5 & 1;
}


