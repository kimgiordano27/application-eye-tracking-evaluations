/*
FUNCTION_NAME: FUN_057e1404
ENTRY_POINT: 057e1404
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 152
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_10;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_057e1404(long param_1,long *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined8 uVar18;
  long *plVar19;
  
  if ((DAT_06bc0cc7 & 1) == 0) {
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary_Enumerator<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_MoveNext__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary_Enumerator<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Current__
                );
    FUN_02f08768(Method_System_Collections_Generic_Dictionary<OVRGLTFInputNode,_int>_Add__);
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary_Enumerator<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_Dispose__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary_Enumerator<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_MoveNext__
                );
    FUN_02f08768(Method_System_Collections_Generic_Dictionary<string,_DataColumn>_TryGetValue__);
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<Type,_EventCallback<AttachToPanelEvent>>_ContainsKey__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>_GetEnumerator__
                );
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<Vector2Int,_int>_get_lowValue__);
    FUN_02f08768(PTR_DAT_067cde88);
    FUN_02f08768(PTR_DAT_067cde90);
    FUN_02f08768(PTR_DAT_067d7cb8);
    DAT_06bc0cc7 = 1;
  }
  puVar8 = Method_System_Collections_Generic_Dictionary<OVRGLTFInputNode,_int>_Add__;
  uVar10 = FUN_0580db68(0);
  *(undefined8 *)(param_1 + 0xa8) = uVar10;
  FUN_05116b38(param_1,0);
  *(long **)(param_1 + 0x18) = param_2;
  if (param_2 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    bVar5 = *(byte *)(*(long *)
                       Method_System_Collections_Generic_Dictionary<Type,_EventCallback<AttachToPanelEvent>>_ContainsKey__
                     + 0x130);
    if (*(byte *)(*param_2 + 0x130) < bVar5) {
      plVar19 = (long *)0x0;
    }
    else {
      plVar19 = param_2;
      if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar5 * 8 + -8) !=
          *(long *)
           Method_System_Collections_Generic_Dictionary<Type,_EventCallback<AttachToPanelEvent>>_ContainsKey__
         ) {
        plVar19 = (long *)0x0;
      }
    }
    *(long **)(param_1 + 0x20) = plVar19;
  }
  uVar10 = thunk_FUN_02f45174(param_2,*(undefined8 *)puVar8);
  uVar14 = *(undefined8 *)puVar8;
  *(undefined8 *)(param_1 + 0x28) = uVar10;
  thunk_FUN_02f45174(param_2,uVar14);
  plVar19 = *(long **)(param_1 + 0x20);
  if (plVar19 != (long *)0x0) {
    lVar11 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary_Enumerator<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_Dispose__
                               );
    FUN_05116b38(lVar11,0);
    *(long *)(lVar11 + 0x10) = param_1;
    (**(code **)(*plVar19 + 0x408))(plVar19,lVar11,*(undefined8 *)(*plVar19 + 0x410));
  }
  puVar7 = 
  Method_System_Collections_Generic_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>_GetEnumerator__
  ;
  if (param_3 != 0) {
    bVar5 = *(byte *)(param_3 + 0x44);
    iVar1 = *(int *)(param_3 + 0x48);
    *(undefined1 *)(param_1 + 0x9c) = *(undefined1 *)(param_3 + 0x4c);
    puVar9 = 
    Method_System_Collections_Generic_Dictionary_Enumerator<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_MoveNext__
    ;
    uVar6 = *(undefined1 *)(param_3 + 0x4d);
    lVar11 = *(long *)puVar7;
    *(byte *)(param_1 + 0x9d) = bVar5 & 1;
    iVar2 = *(int *)(lVar11 + 0xe4);
    *(undefined1 *)(param_1 + 0x9e) = uVar6;
    *(int *)(param_1 + 0xa0) = iVar1;
    if (iVar1 == 2) {
      if (iVar2 == 0) {
        thunk_FUN_02f6670c();
        lVar11 = *(long *)puVar7;
      }
      puVar12 = (undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x18);
    }
    else {
      if (iVar2 == 0) {
        thunk_FUN_02f6670c();
        lVar11 = *(long *)puVar7;
      }
      puVar12 = (undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x20);
    }
    uVar14 = *puVar12;
    uVar10 = *(undefined8 *)puVar9;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0x90) = uVar14;
    lVar11 = FUN_02f0880c(uVar10,8);
    *(long *)(param_1 + 0x30) = lVar11;
    uVar10 = DAT_011b1630;
    if (lVar11 != 0) {
      uVar3 = *(uint *)(lVar11 + 0x18);
      if (uVar3 != 0) {
        uVar14 = *(undefined8 *)PTR_DAT_067cde90;
        uVar18 = *(undefined8 *)PTR_DAT_067cde88;
        *(undefined8 *)(lVar11 + 0x30) = DAT_011b1630;
        *(undefined8 *)(lVar11 + 0x20) = uVar14;
        *(undefined8 *)(lVar11 + 0x28) = uVar18;
        if (uVar3 != 1) {
          plVar19 = *(long **)(param_1 + 0x28);
          uVar14 = *(undefined8 *)Method_Unity_AppUI_UI_BaseSlider<Vector2Int,_int>_get_lowValue__;
          *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)PTR_DAT_067d7cb8;
          puVar7 = PTR_DAT_067c9338;
          *(undefined8 *)(lVar11 + 0x40) = uVar14;
          *(undefined8 *)(lVar11 + 0x48) = uVar10;
          if (plVar19 == (long *)0x0) {
            if (uVar3 < 3) goto LAB_057e17fc;
            lVar15 = **(long **)(*(long *)(puVar7 + 0x90) + 0xb8);
            lVar13 = lVar15;
          }
          else {
            lVar11 = *plVar19;
            uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
            uVar10 = **(undefined8 **)(*(long *)(puVar7 + 0x90) + 0xb8);
            if (uVar16 != 0) {
              piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)puVar8) {
                  puVar12 = (undefined8 *)(lVar11 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                  goto LAB_057e1708;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            puVar12 = (undefined8 *)FUN_02f421d0(plVar19,*(long *)puVar8,1);
LAB_057e1708:
            lVar13 = (*(code *)*puVar12)(plVar19,uVar10,puVar12[1]);
            lVar11 = *(long *)(param_1 + 0x30);
            if (lVar11 == 0) goto LAB_057e1800;
            lVar15 = **(long **)(*(long *)(puVar7 + 0x90) + 0xb8);
            if (lVar13 != 0) {
              lVar15 = lVar13;
            }
            lVar13 = **(long **)(*(long *)(puVar7 + 0x90) + 0xb8);
            if (*(uint *)(lVar11 + 0x18) < 3) goto LAB_057e17fc;
          }
          puVar8 = 
          Method_System_Collections_Generic_Dictionary_Enumerator<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Current__
          ;
          *(long *)(lVar11 + 0x50) = lVar13;
          *(long *)(lVar11 + 0x58) = lVar15;
          uVar10 = *(undefined8 *)puVar8;
          *(undefined8 *)(lVar11 + 0x60) = DAT_011b13c0;
          *(undefined4 *)(param_1 + 0x38) = 2;
          lVar11 = FUN_02f0880c(uVar10,8);
          *(long *)(param_1 + 0x50) = lVar11;
          if (lVar11 == 0) goto LAB_057e1800;
          if (*(int *)(lVar11 + 0x18) != 0) {
            lVar15 = *(long *)(puVar7 + 0x90);
            uVar4 = *(undefined4 *)(param_1 + 0x38);
            *(undefined8 *)(lVar11 + 0x48) = 0;
            puVar12 = *(undefined8 **)(lVar15 + 0xb8);
            *(undefined4 *)(lVar11 + 0x40) = 0;
            *(undefined4 *)(lVar11 + 0x20) = uVar4;
            puVar7 = 
            Method_System_Collections_Generic_Dictionary_Enumerator<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_MoveNext__
            ;
            uVar14 = *puVar12;
            *(undefined8 *)(lVar11 + 0x38) = uVar14;
            puVar8 = Method_System_Collections_Generic_Dictionary<string,_DataColumn>_TryGetValue__;
            uVar10 = *(undefined8 *)puVar7;
            *(undefined8 *)(lVar11 + 0x28) = uVar14;
            *(undefined8 *)(lVar11 + 0x30) = uVar14;
            *(undefined4 *)(param_1 + 0x58) = 0;
            uVar10 = FUN_02f0880c(uVar10,8);
            uVar14 = *(undefined8 *)puVar8;
            *(undefined8 *)(param_1 + 0x60) = uVar10;
            uVar10 = thunk_FUN_02f45270(uVar14);
            FUN_056f33b0(uVar10,0);
            *(undefined8 *)(param_1 + 0xb0) = uVar10;
            return;
          }
        }
      }
LAB_057e17fc:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
  }
LAB_057e1800:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


