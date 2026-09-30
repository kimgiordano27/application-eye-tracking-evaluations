/*
FUNCTION_NAME: FUN_02384474
ENTRY_POINT: 02384474
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_02384474(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  if ((DAT_03781df7 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_ARFoundation_ARTrackable<XRTrackedImage,_ARTrackedImage>__ctor__
                      );
    thunk_FUN_00d48444(PTR_DAT_033ef370);
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateList__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IRaycaster>__ctor__);
    thunk_FUN_00d48444(System_Collections_Generic_IEnumerator<ParticleSystem>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Reflection_RuntimePropertyInfo_GetValue__);
    thunk_FUN_00d48444(Method_Sirenix_Utilities_MemberInfoExtensions_GetAttributes<Attribute>__);
    thunk_FUN_00d48444(System_Collections_Generic_IEnumerator<string>_TypeInfo);
    thunk_FUN_00d48444(Method_System_DateTime_Add__);
    DAT_03781df7 = 1;
  }
  puVar2 = Method_Sirenix_Utilities_MemberInfoExtensions_GetAttributes<Attribute>__;
  puVar1 = Method_System_DateTime_Add__;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  if ((param_2 != 0) && (lVar4 = *(long *)(param_1 + 0x118), lVar4 != 0)) {
    uVar6 = *(undefined8 *)(param_2 + 0x60);
    iVar7 = *(int *)(lVar4 + 0x18) + -1;
    if (iVar7 < 0) {
LAB_02384598:
      if (*(long *)(param_1 + 0x110) != 0) {
        uVar5 = FUN_0129aa60(*(long *)(param_1 + 0x110),uVar6,
                             *(undefined8 *)
                              Method_UnityEngine_XR_ARFoundation_ARTrackable<XRTrackedImage,_ARTrackedImage>__ctor__
                            );
        if ((uVar5 & 1) != 0) {
          if (*(long *)(param_1 + 0x110) == 0) goto LAB_02384594;
          FUN_0129de0c(*(long *)(param_1 + 0x110),uVar6,*(undefined8 *)PTR_DAT_033ef370);
        }
        puVar3 = Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateList__;
        puVar2 = Method_System_Collections_Generic_List<IRaycaster>__ctor__;
        puVar1 = System_Collections_Generic_IEnumerator<ParticleSystem>_TypeInfo;
        if (*(long *)(param_2 + 0x20) != 0) {
          FUN_01323390(*(long *)(param_2 + 0x20),&local_58,
                       *(undefined8 *)Method_System_Reflection_RuntimePropertyInfo_GetValue__);
          while (uVar5 = FUN_012b894c(&local_58,*(undefined8 *)puVar2), (uVar5 & 1) != 0) {
            uVar6 = FUN_00ca6d6c(&local_58,*(undefined8 *)puVar1);
            FUN_02383538(param_1,uVar6);
          }
          FUN_012b8948(&local_58,*(undefined8 *)puVar3);
          FUN_023846cc(param_1);
          return;
        }
      }
    }
    else {
      do {
        FUN_0132138c(lVar4,iVar7,&local_38,*(undefined8 *)puVar1);
        if (local_38 == 0) break;
        uVar5 = thunk_FUN_015fe514(*(undefined8 *)(local_38 + 0x10),uVar6,0);
        if ((uVar5 & 1) != 0) {
          if (*(long *)(param_1 + 0x118) == 0) break;
          FUN_01324ac8(*(long *)(param_1 + 0x118),iVar7,*(undefined8 *)puVar2);
        }
        iVar7 = iVar7 + -1;
        if (iVar7 < 0) goto LAB_02384598;
        lVar4 = *(long *)(param_1 + 0x118);
      } while (lVar4 != 0);
    }
  }
LAB_02384594:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


