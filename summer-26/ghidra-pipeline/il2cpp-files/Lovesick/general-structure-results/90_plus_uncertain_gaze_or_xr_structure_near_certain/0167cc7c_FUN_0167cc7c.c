/*
FUNCTION_NAME: FUN_0167cc7c
ENTRY_POINT: 0167cc7c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 96
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


long * FUN_0167cc7c(long param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long *plVar13;
  long *plVar14;
  uint uVar15;
  long lVar16;
  uint local_54;
  
  if ((DAT_0377846b & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_3033);
    thunk_FUN_00d48444(Method_System_Net_CookieCollection_get_Item__);
    thunk_FUN_00d48444(
                      System_Collections_Generic_List<ProbeVolumeSceneData_SerializablePVBakeSettings>_TypeInfo
                      );
    DAT_0377846b = 1;
  }
  if (param_1 == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar11 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar12 = 
    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_RemoteInputDevice>__;
  }
  else {
    if (param_2 != 0) {
      uVar1 = *(uint *)(param_2 + 0x18);
      plVar5 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,uVar1);
      puVar3 = Method_System_Net_CookieCollection_get_Item__;
      puVar12 = 
      System_Collections_Generic_List<ProbeVolumeSceneData_SerializablePVBakeSettings>_TypeInfo;
      if (0 < (int)uVar1) {
        uVar15 = 0;
        do {
          if (*(uint *)(param_2 + 0x18) <= uVar15) {
LAB_0167ce60:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          lVar16 = (long)(int)uVar15;
          plVar13 = *(long **)(param_2 + lVar16 * 8 + 0x20);
          uVar6 = FUN_0169aa20(plVar13,0,0);
          if ((uVar6 & 1) != 0) {
            uVar11 = thunk_FUN_00d48444(StringLiteral_3033);
            uVar11 = FUN_00da4fb8(uVar11,1);
            local_54 = uVar15;
            uVar9 = thunk_FUN_00d48444(
                                      Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                      );
            uVar9 = thunk_FUN_00d61fa0(uVar9,&local_54);
            FUN_00ac2be8(uVar11);
            FUN_00acb0b4(uVar11,uVar9);
            FUN_00adb25c(uVar11,0,uVar9);
            uVar9 = thunk_FUN_00d48444(OVRPlugin_OVRP_0_5_0_TypeInfo);
            uVar11 = FUN_017b63dc(uVar9,uVar11,0);
            thunk_FUN_00d48444(PTR_DAT_033f37c8);
            uVar10 = thunk_FUN_00d62348();
            FUN_00ac2be8();
            uVar9 = thunk_FUN_00d48444(StringLiteral_11130);
            FUN_016f4460(uVar10,uVar9,uVar11,0);
LAB_0167cf50:
            uVar11 = thunk_FUN_00d48444(StringLiteral_10823);
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar10,uVar11);
          }
          if (plVar13 == (long *)0x0) {
LAB_0167ce5c:
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          iVar4 = (**(code **)(*plVar13 + 0x1a8))(plVar13,*(undefined8 *)(*plVar13 + 0x1b0));
          if (iVar4 != 4) {
            uVar11 = thunk_FUN_00d48444(PTR_DAT_033f7150);
            uVar11 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar11,0);
            thunk_FUN_00d48444(
                              UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                              );
            uVar10 = thunk_FUN_00d62348();
            FUN_00ac2be8();
            FUN_01679968(uVar10,uVar11);
            goto LAB_0167cf50;
          }
          bVar2 = *(byte *)(*(long *)puVar3 + 300);
          if (*(byte *)(*plVar13 + 300) < bVar2) {
            plVar14 = (long *)0x0;
          }
          else {
            plVar14 = plVar13;
            if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar3) {
              plVar14 = (long *)0x0;
            }
          }
          uVar6 = FUN_016aafa4(plVar14,0,0);
          if ((uVar6 & 1) == 0) {
            if (*plVar13 != *(long *)puVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_00da544c(plVar13);
            }
            lVar7 = FUN_0167cfe8(plVar13,param_1);
          }
          else {
            if (plVar14 == (long *)0x0) goto LAB_0167ce5c;
            (**(code **)(*plVar14 + 0x378))(plVar14,param_1,*(undefined8 *)(*plVar14 + 0x380));
            lVar7 = (**(code **)(*plVar14 + 0x358))
                              (plVar14,param_1,*(undefined8 *)(*plVar14 + 0x360));
          }
          if (plVar5 == (long *)0x0) goto LAB_0167ce5c;
          if ((lVar7 != 0) &&
             (lVar8 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0)) {
            uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar11,0);
          }
          if (*(uint *)(plVar5 + 3) <= uVar15) goto LAB_0167ce60;
          uVar15 = uVar15 + 1;
                    /* try { // try from 0167ce30 to 0177d2f7 has its CatchHandler @ 0167ce30
                       catch() { ... } // from try @ 0167ce30 with catch @ 0167ce30
                       catch() { ... } // from try @ 0167d330 with catch @ 0167ce30
                       catch() { ... } // from try @ 0167d4f0 with catch @ 0167ce30
                       catch() { ... } // from try @ 0167d520 with catch @ 0167ce30
                       catch() { ... } // from try @ 0167d578 with catch @ 0167ce30
                       catch() { ... } // from try @ 0167d610 with catch @ 0167ce30
                       catch() { ... } // from try @ 0167d634 with catch @ 0167ce30
                       catch() { ... } // from try @ 0167d6ac with catch @ 0167ce30
                       catch() { ... } // from try @ 0167d6fc with catch @ 0167ce30
                       catch() { ... } // from try @ 0167d790 with catch @ 0167ce30
                       catch() { ... } // from try @ 0167d8b8 with catch @ 0167ce30
                       catch() { ... } // from try @ 0167d8ec with catch @ 0167ce30
                       catch() { ... } // from try @ 0167d9c8 with catch @ 0167ce30
                       catch() { ... } // from try @ 0167da78 with catch @ 0167ce30
                       catch() { ... } // from try @ 0167daa8 with catch @ 0167ce30
                       catch() { ... } // from try @ 0167dc6c with catch @ 0167ce30
                       catch() { ... } // from try @ 0167deb8 with catch @ 0167ce30
                       catch() { ... } // from try @ 0167dfc0 with catch @ 0167ce30
                       catch() { ... } // from try @ 0167e020 with catch @ 0167ce30
                       catch() { ... } // from try @ 0167e088 with catch @ 0167ce30
                       catch() { ... } // from try @ 0167e0f4 with catch @ 0167ce30
                       catch() { ... } // from try @ 0167e168 with catch @ 0167ce30
                       catch() { ... } // from try @ 0167e1cc with catch @ 0167ce30
                       catch() { ... } // from try @ 0167e370 with catch @ 0167ce30
                       catch() { ... } // from try @ 0167e3d8 with catch @ 0167ce30
                       catch() { ... } // from try @ 0167e41c with catch @ 0167ce30
                       catch() { ... } // from try @ 0167e484 with catch @ 0167ce30
                       catch() { ... } // from try @ 0167e4f4 with catch @ 0167ce30
                       catch() { ... } // from try @ 0167e55c with catch @ 0167ce30
                       catch() { ... } // from try @ 0167e5c8 with catch @ 0167ce30
                       catch() { ... } // from try @ 0167e664 with catch @ 0167ce30
                       catch() { ... } // from try @ 0167e6a0 with catch @ 0167ce30
                       catch() { ... } // from try @ 0167e774 with catch @ 0167ce30
                       catch() { ... } // from try @ 0167e7cc with catch @ 0167ce30
                       catch() { ... } // from try @ 0167e7ec with catch @ 0167ce30
                       catch() { ... } // from try @ 0167e85c with catch @ 0167ce30
                       catch() { ... } // from try @ 0167e878 with catch @ 0167ce30
                       catch() { ... } // from try @ 0167e8c4 with catch @ 0167ce30
                       catch() { ... } // from try @ 0167e8e0 with catch @ 0167ce30
                       catch() { ... } // from try @ 0167e944 with catch @ 0167ce30
                       catch() { ... } // from try @ 0167e960 with catch @ 0167ce30
                       catch() { ... } // from try @ 0167e9c8 with catch @ 0167ce30
                       catch() { ... } // from try @ 0167e9f4 with catch @ 0167ce30
                       catch() { ... } // from try @ 0167ea30 with catch @ 0167ce30 */
          plVar5[lVar16 + 4] = lVar7;
        } while (uVar1 != uVar15);
      }
      return plVar5;
    }
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar11 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar12 = StringLiteral_11130;
  }
  uVar9 = thunk_FUN_00d48444(puVar12);
  FUN_016ec5b8(uVar11,uVar9,0);
  uVar9 = thunk_FUN_00d48444(StringLiteral_10823);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar11,uVar9);
}


