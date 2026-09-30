/*
FUNCTION_NAME: FUN_0517dc14
ENTRY_POINT: 0517dc14
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_0517dc14(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  undefined1 local_40 [16];
  undefined4 local_24;
  
  if ((DAT_06bba28e & 1) == 0) {
                    /* try { // try from 0517dc38 to 0527dc3b has its CatchHandler @ 0517dc40 */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 0517dbd4 with catch @ 0517dc3c
                       try { // try from 0517dc3c to 0527dc5b has its CatchHandler @ 0517dba4 */
    FUN_02f08768(System_Collections_Generic_Dictionary<string,_JToken>_TypeInfo);
                    /* catch(type#1 @ 06402238) { ... } // from try @ 0517dbf4 with catch @ 0517dc40
                       catch(type#1 @ 06402238) { ... } // from try @ 0517dc38 with catch @ 0517dc40
                        */
    FUN_02f08768(PTR_DAT_067cb870);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TypeInfo
                );
                    /* try { // try from 0517dc5c to 0527dc5f has its CatchHandler @ 0517dc68 */
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<CanvasOptimizer>_TypeInfo
                );
                    /* catch() { ... } // from try @ 0517dc5c with catch @ 0517dc68 */
                    /* try { // try from 0517dc6c to 0527dc73 has its CatchHandler @ 0517dc7c */
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ClimbProvider>_TypeInfo
                );
                    /* try { // try from 0517dc74 to 0527dc7f has its CatchHandler @ 0517dba4 */
    DAT_06bba28e = 1;
  }
  iVar1 = *param_1;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0517dc6c with catch @ 0517dc7c
                        */
  plVar9 = *(long **)(param_1 + 8);
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  if (iVar1 == 0) {
    local_40 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
LAB_0517dd1c:
    FUN_050080b0(local_40,0);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar6 = (**(code **)(*plVar9 + 0x248))(plVar9,*(undefined8 *)(*plVar9 + 0x250));
    if (lVar6 == 0) goto LAB_0517dfb4;
    plVar3 = (long *)(**(code **)(*plVar9 + 0x248))(plVar9,*(undefined8 *)(*plVar9 + 0x250));
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    uVar5 = thunk_FUN_04f6d944(uVar4,*(undefined8 *)
                                      UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ClimbProvider>_TypeInfo
                               ,0);
    if ((uVar5 & 1) == 0) goto LAB_0517dfb4;
    lVar6 = FUN_0515f780(plVar9,*(undefined8 *)(param_1 + 10),0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    auVar10 = FUN_05146c14(lVar6,0,0);
    local_40 = auVar10;
    uVar5 = FUN_05008098(local_40,0);
    puVar2 = PTR_DAT_067cb870;
    if ((uVar5 & 1) == 0) {
      *param_1 = 1;
      lVar6 = *(long *)puVar2;
      *(undefined1 (*) [16])(param_1 + 0xc) = local_40;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_032f80f0(param_1 + 2,local_40,param_1,
                   *(undefined8 *)System_Collections_Generic_Dictionary<string,_JToken>_TypeInfo);
      return;
    }
LAB_0517ddb4:
    FUN_050080b0(local_40,0);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar6 = (**(code **)(*plVar9 + 0x248))(plVar9,*(undefined8 *)(*plVar9 + 0x250));
    if (lVar6 == 0) goto LAB_0517dfb4;
    plVar3 = (long *)(**(code **)(*plVar9 + 0x248))(plVar9,*(undefined8 *)(*plVar9 + 0x250));
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar6 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar5 = FUN_04f6dd04(lVar6,*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<CanvasOptimizer>_TypeInfo
                         ,4,0);
    if ((uVar5 & 1) == 0) goto LAB_0517dfb4;
    lVar6 = FUN_0515f780(plVar9,*(undefined8 *)(param_1 + 10),0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    auVar10 = FUN_05146c14(lVar6,0,0);
    local_40 = auVar10;
    uVar5 = FUN_05008098(local_40,0);
    puVar2 = PTR_DAT_067cb870;
    if ((uVar5 & 1) == 0) {
      *param_1 = 2;
      lVar6 = *(long *)puVar2;
      *(undefined1 (*) [16])(param_1 + 0xc) = local_40;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_032f80f0(param_1 + 2,local_40,param_1,
                   *(undefined8 *)System_Collections_Generic_Dictionary<string,_JToken>_TypeInfo);
      return;
    }
  }
  else {
    if (iVar1 == 1) {
      local_40 = *(undefined1 (*) [16])(param_1 + 0xc);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      *param_1 = -1;
      goto LAB_0517ddb4;
    }
    if (iVar1 != 2) {
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar6 = FUN_0515f780(plVar9,*(undefined8 *)(param_1 + 10),0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      local_40 = FUN_05146c14(lVar6,0,0);
      uVar5 = FUN_05008098(local_40,0);
      puVar2 = PTR_DAT_067cb870;
      if ((uVar5 & 1) == 0) {
        *param_1 = 0;
        lVar6 = *(long *)puVar2;
        *(undefined1 (*) [16])(param_1 + 0xc) = local_40;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_032f80f0(param_1 + 2,local_40,param_1,
                     *(undefined8 *)System_Collections_Generic_Dictionary<string,_JToken>_TypeInfo);
        return;
      }
      goto LAB_0517dd1c;
    }
    local_40 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  FUN_050080b0(local_40,0);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  plVar3 = (long *)(**(code **)(*plVar9 + 0x248))(plVar9,*(undefined8 *)(*plVar9 + 0x250));
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
  uVar5 = thunk_FUN_04f6d944(uVar4,*(undefined8 *)
                                    UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TypeInfo
                             ,0);
  puVar2 = PTR_DAT_067cb870;
  if ((uVar5 & 1) != 0) {
    *param_1 = -2;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_050087ec(param_1 + 2,0);
    return;
  }
LAB_0517dfb4:
  lVar6 = thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar4 = FUN_050656a0(0);
  local_24 = 1;
  uVar7 = thunk_FUN_02f6ef30(System_Comparison<XmlReflectionMember>_TypeInfo);
  uVar7 = thunk_FUN_02f44ec4(uVar7,&local_24);
  uVar8 = thunk_FUN_02f6ef30(
                            UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARPlaneManager>_TypeInfo
                            );
  uVar4 = FUN_051b937c(uVar8,uVar4,uVar7,0);
  uVar4 = FUN_05160b1c(plVar9,uVar4,0);
  uVar7 = thunk_FUN_02f6ef30(System_Collections_Generic_Dictionary<string,_JsonSchema>_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar4,uVar7);
}


