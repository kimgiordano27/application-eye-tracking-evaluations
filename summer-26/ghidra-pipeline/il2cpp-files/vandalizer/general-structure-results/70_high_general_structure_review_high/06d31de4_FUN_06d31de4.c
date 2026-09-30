/*
FUNCTION_NAME: FUN_06d31de4
ENTRY_POINT: 06d31de4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure
*/


void FUN_06d31de4(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  
  if ((DAT_07a50dac & 1) == 0) {
    FUN_031f20f4(Photon_Voice_IAudioPusher<float>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_ICollection<ArraySegment<byte>>_TypeInfo);
    FUN_031f20f4(PTR_DAT_0759b2a8);
    FUN_031f20f4(UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollViewMode>_TypeInfo);
    FUN_031f20f4(UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>_TypeInfo);
    FUN_031f20f4(UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>_TypeInfo);
    FUN_031f20f4(UnityEngine_UIElements_UxmlEnumAttributeDescription<SliderDirection>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_IEnumerator<RenamedNamespaceAttribute>_TypeInfo);
    FUN_031f20f4(PTR_DAT_076202a0);
    FUN_031f20f4(System_Collections_Generic_IEnumerator<ResponderID>_TypeInfo);
    FUN_031f20f4(PTR_DAT_076202c0);
    FUN_031f20f4(System_Collections_Generic_IEnumerator<SignerInformation>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_IEnumerator<OpenXRInteractionFeature>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_IEnumerator<SimulationConnection>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_IEnumerator<OtherName>_TypeInfo);
    DAT_07a50dac = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar2 = *(long *)PTR_DAT_0759b2a8;
    if ((*(byte *)(lVar2 + 0x130) <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) == lVar2)) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar3 = FUN_06e5ba28(param_2,0,0);
      if ((uVar3 & 1) != 0) {
        return;
      }
    }
    puVar1 = System_Collections_Generic_ICollection<ArraySegment<byte>>_TypeInfo;
    plVar4 = (long *)thunk_FUN_0322f04c(param_2,*(undefined8 *)
                                                 System_Collections_Generic_ICollection<ArraySegment<byte>>_TypeInfo
                                       );
    if (plVar4 != (long *)0x0) {
      lVar7 = *plVar4;
      lVar2 = *(long *)puVar1;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar2) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_06d31f84;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_0322c1e8(plVar4,lVar2,0);
LAB_06d31f84:
      lVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      uVar6 = thunk_FUN_0322f148(*(undefined8 *)
                                  System_Collections_Generic_IEnumerator<RenamedNamespaceAttribute>_TypeInfo
                                );
      FUN_0520ccd4(uVar6,param_1,
                   *(undefined8 *)
                    UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>_TypeInfo,0);
      if (lVar2 == 0) goto LAB_06d32220;
      FUN_05212e18(lVar2,uVar6,
                   *(undefined8 *)System_Collections_Generic_IEnumerator<SignerInformation>_TypeInfo
                  );
      lVar7 = *plVar4;
      lVar2 = *(long *)puVar1;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar2) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_06d32030;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_0322c1e8(plVar4,lVar2,1);
LAB_06d32030:
      lVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      uVar6 = thunk_FUN_0322f148(*(undefined8 *)
                                  System_Collections_Generic_IEnumerator<ResponderID>_TypeInfo);
      FUN_0520ccd4(uVar6,param_1,
                   *(undefined8 *)
                    UnityEngine_UIElements_UxmlEnumAttributeDescription<SliderDirection>_TypeInfo,0)
      ;
      if (lVar2 == 0) goto LAB_06d32220;
      FUN_05212e18(lVar2,uVar6,
                   *(undefined8 *)
                    System_Collections_Generic_IEnumerator<SimulationConnection>_TypeInfo);
    }
    puVar1 = Photon_Voice_IAudioPusher<float>_TypeInfo;
    plVar4 = (long *)thunk_FUN_0322f04c(param_2,*(undefined8 *)
                                                 Photon_Voice_IAudioPusher<float>_TypeInfo);
    if (plVar4 != (long *)0x0) {
      lVar7 = *plVar4;
      lVar2 = *(long *)puVar1;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar2) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_06d32108;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_0322c1e8(plVar4,lVar2,0);
LAB_06d32108:
      lVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      uVar6 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_076202a0);
      FUN_0520ccd4(uVar6,param_1,
                   *(undefined8 *)
                    UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollViewMode>_TypeInfo,0);
      if (lVar2 != 0) {
        FUN_05212e18(lVar2,uVar6,
                     *(undefined8 *)
                      System_Collections_Generic_IEnumerator<OpenXRInteractionFeature>_TypeInfo);
        lVar7 = *plVar4;
        lVar2 = *(long *)puVar1;
        uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar3 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar2) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_06d321b4;
            }
            uVar3 = uVar3 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar3 != 0);
        }
        puVar5 = (undefined8 *)FUN_0322c1e8(plVar4,lVar2,1);
LAB_06d321b4:
        lVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        uVar6 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_076202c0);
        FUN_0520ccd4(uVar6,param_1,
                     *(undefined8 *)
                      UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>_TypeInfo
                     ,0);
        if (lVar2 != 0) {
          FUN_05212e18(lVar2,uVar6,
                       *(undefined8 *)System_Collections_Generic_IEnumerator<OtherName>_TypeInfo);
          return;
        }
      }
LAB_06d32220:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
  }
  return;
}


