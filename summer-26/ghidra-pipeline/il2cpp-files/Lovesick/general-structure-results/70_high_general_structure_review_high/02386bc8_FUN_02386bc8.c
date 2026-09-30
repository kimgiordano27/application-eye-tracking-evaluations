/*
FUNCTION_NAME: FUN_02386bc8
ENTRY_POINT: 02386bc8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_02386bc8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  long local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  
  if ((DAT_03781e0b & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_12349);
    thunk_FUN_00d48444(PTR_DAT_033f3c48);
    thunk_FUN_00d48444(PTR_DAT_033f6b98);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_get_Item__
                      );
    thunk_FUN_00d48444(System_Xml_TextUtf8RawTextWriter_TypeInfo);
    thunk_FUN_00d48444(TMPro_HorizontalAlignmentOptions___TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_get_Item__);
    thunk_FUN_00d48444(Method_System_Xml_XmlNodeReaderNavigator_CheckIndexCondition__);
    thunk_FUN_00d48444(StringLiteral_7120);
    thunk_FUN_00d48444(StringLiteral_12567);
    thunk_FUN_00d48444(StringLiteral_4548);
    thunk_FUN_00d48444(UnityEngine_SpookyHash_TypeInfo);
    thunk_FUN_00d48444(SaveServerInterface_SaveServerPost_TypeInfo);
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_A203B1199E78DE3BB75B28FC520ED2F86ADB2749BFC52E3ACA275A3BE2587678
                      );
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Linq_JToken_<BeforeSelf>d__50_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(Method_System_Tuple<bool,_bool,_bool,_bool>_get_Item1__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmul_s16__);
    DAT_03781e0b = 1;
  }
  uStack_98 = 0;
  local_90 = 0;
  local_a0 = 0;
  if (*(long *)(param_1 + 0x160) == 0) goto LAB_02386ffc;
  if (*(char *)(*(long *)(param_1 + 0x160) + 0x10) == '\0') {
    return;
  }
  if (*(long *)(param_1 + 0x188) == 0) goto LAB_02386ffc;
  if (*(int *)(*(long *)(param_1 + 0x188) + 0x18) == 0) {
    FUN_02388348(param_1);
  }
  FUN_02681274(param_2,*(undefined8 *)(param_1 + 400),0);
  if (*(long *)(param_1 + 0x180) == 0) goto LAB_02386ffc;
  FUN_0267e718(*(long *)(param_1 + 0x180),0,0);
  if (*(int *)(param_1 + 0x154) == 2) {
    lVar7 = *(long *)(param_1 + 0x180);
    puVar2 = (undefined8 *)SaveServerInterface_SaveServerPost_TypeInfo;
joined_r0x02386d54:
    if (lVar7 == 0) goto LAB_02386ffc;
    FUN_0267e30c(lVar7,*puVar2,0);
  }
  else if (*(int *)(param_1 + 0x154) == 1) {
    lVar7 = *(long *)(param_1 + 0x180);
    puVar2 = (undefined8 *)Method_System_Tuple<bool,_bool,_bool,_bool>_get_Item1__;
    goto joined_r0x02386d54;
  }
  puVar5 = 
  Field_<PrivateImplementationDetails>_A203B1199E78DE3BB75B28FC520ED2F86ADB2749BFC52E3ACA275A3BE2587678
  ;
  puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmul_s16__;
  puVar3 = 
  Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_get_Item__;
  if (*(long *)(param_1 + 0x188) != 0) {
    FUN_01323390(*(long *)(param_1 + 0x188),&local_b8,
                 *(undefined8 *)System_Xml_TextUtf8RawTextWriter_TypeInfo);
    uStack_98 = uStack_b0;
    local_a0 = local_b8;
    local_90 = local_a8;
    while( true ) {
      do {
        uVar8 = FUN_012b894c(&local_a0,*(undefined8 *)PTR_DAT_033f3c48);
        if ((uVar8 & 1) == 0) {
          FUN_012b8948(&local_a0,*(undefined8 *)StringLiteral_12349);
          return;
        }
        lVar7 = FUN_00ca7254(&local_a0,*(undefined8 *)PTR_DAT_033f6b98);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar12 = *(undefined4 *)(lVar7 + 0x30);
        uVar13 = *(undefined4 *)(lVar7 + 0x34);
        uVar14 = *(undefined4 *)(lVar7 + 0x38);
        uVar9 = FUN_0268fd10(param_2,0);
        uVar8 = FUN_023880d0(uVar12,uVar13,uVar14,param_1,uVar9,*(undefined8 *)(param_1 + 400));
      } while ((uVar8 & 1) != 0);
      lVar10 = *(long *)(lVar7 + 0x10);
      if (lVar10 == 0) break;
      iVar11 = 0;
      while (iVar11 < *(int *)(lVar10 + 0x18)) {
        FUN_0132138c(lVar10,iVar11,&local_b8,
                     *(undefined8 *)Method_System_Xml_XmlNodeReaderNavigator_CheckIndexCondition__);
        lVar10 = local_b8;
        if (*(long *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0132138c(*(long *)(lVar7 + 0x18),iVar11,&local_b8,*(undefined8 *)StringLiteral_7120);
        lVar6 = local_b8;
        if (*(long *)(param_1 + 0x160) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (local_b8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0267bca8(local_b8,*(undefined8 *)StringLiteral_4548,
                     *(undefined4 *)(*(long *)(param_1 + 0x160) + 0x1c),0);
        if (*(long *)(param_1 + 0x160) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0267be18(*(undefined4 *)(*(long *)(param_1 + 0x160) + 0x30),lVar6,
                     *(undefined8 *)
                      Method_Newtonsoft_Json_Linq_JToken_<BeforeSelf>d__50_System_Collections_IEnumerator_Reset__
                     ,0);
        if (*(long *)(param_1 + 0x160) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0267be18(*(undefined4 *)(*(long *)(param_1 + 0x160) + 0x20),lVar6,
                     *(undefined8 *)UnityEngine_SpookyHash_TypeInfo,0);
        if (*(long *)(param_1 + 0x160) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0267be18(*(undefined4 *)(*(long *)(param_1 + 0x160) + 0x28),lVar6,
                     *(undefined8 *)StringLiteral_12567,0);
        if (*(long *)(param_1 + 0x160) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0267bca8(lVar6,*(undefined8 *)puVar4,*(undefined4 *)(*(long *)(param_1 + 0x160) + 0x2c),
                     0);
        FUN_0267be18(*(undefined4 *)(param_1 + 0x198),lVar6,*(undefined8 *)puVar5,0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar9 = *(undefined8 *)(param_1 + 0x178);
        uVar1 = *(undefined8 *)(param_1 + 0x180);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02677a94(uVar9,0,uVar1,lVar10,*(undefined4 *)(lVar10 + 0x18),lVar6,0,0,0,param_2,0,0,0);
        lVar10 = *(long *)(lVar7 + 0x10);
        iVar11 = iVar11 + 1;
        if (lVar10 == 0) goto LAB_02386f94;
      }
    }
LAB_02386f94:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
LAB_02386ffc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


