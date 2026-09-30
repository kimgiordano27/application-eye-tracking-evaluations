/*
FUNCTION_NAME: FUN_018d744c
ENTRY_POINT: 018d744c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_018d744c(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  long *local_28;
  
  if ((DAT_03779a68 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<XRLoader>_MoveNext__);
    thunk_FUN_00d48444(System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Utilities_ReflectionUtils_<>c__DisplayClass45_0_<IsMethodOverridden>b__0__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_ProbeVolumeBakingProcessSettings>_get_Keys__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<TreeViewItemWrapper>_Add__);
    DAT_03779a68 = 1;
  }
  lVar3 = FUN_018d75cc(param_1);
  lVar4 = FUN_018d7384(param_1);
  if (lVar4 != 0) {
    if (*(long *)(lVar4 + 0x30) == 0) {
      return lVar3;
    }
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x18) != 0) {
        FUN_0132138c(lVar3,0,&local_28,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<string,_ProbeVolumeBakingProcessSettings>_get_Keys__
                    );
        if (local_28 == (long *)0x0) goto LAB_018d75c8;
        lVar4 = *local_28;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) ==
                *(long *)Method_System_Collections_Generic_List_Enumerator<XRLoader>_MoveNext__) {
              puVar5 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_018d7550;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_00d59724(local_28,*(long *)
                                        Method_System_Collections_Generic_List_Enumerator<XRLoader>_MoveNext__
                              ,0);
LAB_018d7550:
        iVar2 = (*(code *)*puVar5)(local_28,puVar5[1]);
        if (iVar2 == 0x11) {
          return lVar3;
        }
      }
      lVar4 = FUN_018d7384(param_1);
      if (lVar4 != 0) {
        uVar8 = *(undefined8 *)(lVar4 + 0x30);
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_System_Collections_Generic_List<TreeViewItemWrapper>_Add__
                                  );
        puVar1 = System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo;
        if (lVar4 != 0) {
          FUN_017b46ec(lVar4,0);
          *(undefined8 *)(lVar4 + 0x10) = 0;
          *(undefined8 *)(lVar4 + 0x18) = uVar8;
          FUN_01323a14(lVar3,0,lVar4,*(undefined8 *)puVar1);
          return lVar3;
        }
      }
    }
  }
LAB_018d75c8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


