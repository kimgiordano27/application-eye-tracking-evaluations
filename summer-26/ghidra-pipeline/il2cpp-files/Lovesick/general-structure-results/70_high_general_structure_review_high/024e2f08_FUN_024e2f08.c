/*
FUNCTION_NAME: FUN_024e2f08
ENTRY_POINT: 024e2f08
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior
*/


long FUN_024e2f08(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long local_58;
  
  puVar2 = 
  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__;
  if ((DAT_0378279b & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(Polenter_Serialization_Advanced_Xml_IXmlReader_TypeInfo);
    thunk_FUN_00d48444(
                      System_Collections_Generic_List<InputControlLayout_Collection_LayoutMatcher>_TypeInfo
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Claim>_get_Item__);
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<DecalSubDrawCall>_Dispose__);
    thunk_FUN_00d48444(StringLiteral_11347);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                      );
    thunk_FUN_00d48444(StringLiteral_8149);
    thunk_FUN_00d48444(StringLiteral_13844);
    DAT_0378279b = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (param_1 != 0) {
    uVar10 = FUN_0267e1d8(param_1,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xb4),0);
    puVar7 = StringLiteral_13844;
    puVar6 = StringLiteral_11347;
    puVar5 = StringLiteral_8149;
    puVar4 = Method_Unity_Collections_NativeArray<DecalSubDrawCall>_Dispose__;
    puVar3 = Method_System_Collections_Generic_List<Claim>_get_Item__;
    puVar1 = Polenter_Serialization_Advanced_Xml_IXmlReader_TypeInfo;
    if ((uVar10 & 1) == 0) {
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02661754(*(undefined8 *)puVar7,0);
      return param_1;
    }
    iVar8 = FUN_02681c0c(param_1,0);
    iVar15 = 0;
    do {
      lVar11 = *(long *)puVar5;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar11 = *(long *)puVar5;
      }
      lVar14 = **(long **)(lVar11 + 0xb8);
      if (lVar14 == 0) break;
      if (*(int *)(lVar14 + 0x18) <= iVar15) {
        lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
        if (lVar11 != 0) {
          FUN_0267d6d8(lVar11,param_1,0);
          FUN_0268c458(lVar11,0x3d,0);
          uVar12 = FUN_0267e6dc(param_1,0);
          FUN_0267e718(lVar11,uVar12,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_024e3294();
          FUN_0267f1e8((float)param_2,lVar11,
                       *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xb4),0);
          FUN_0267f1e8(0x40800000,lVar11,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xbc),0
                      );
          lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
          if (lVar14 != 0) {
            FUN_017b46ec(lVar14,0);
            *(long *)(lVar14 + 0x10) = param_1;
            *(long *)(lVar14 + 0x18) = lVar11;
            *(undefined4 *)(lVar14 + 0x20) = 1;
            *(int *)(lVar14 + 0x24) = param_2;
            lVar13 = *(long *)puVar5;
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar13 = *(long *)puVar5;
            }
            if (**(long **)(lVar13 + 0xb8) != 0) {
              FUN_00cb7d2c(**(long **)(lVar13 + 0xb8),lVar14,*(undefined8 *)puVar1);
              return lVar11;
            }
          }
        }
        break;
      }
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar14 = **(long **)(*(long *)puVar5 + 0xb8);
        if (lVar14 == 0) break;
      }
      FUN_0132138c(lVar14,iVar15,&local_58,*(undefined8 *)puVar3);
      if ((local_58 == 0) || (*(long *)(local_58 + 0x10) == 0)) break;
      iVar9 = FUN_02681c0c(*(long *)(local_58 + 0x10),0);
      if (iVar9 == iVar8) {
        lVar11 = *(long *)puVar5;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar11 = *(long *)puVar5;
        }
        if ((**(long **)(lVar11 + 0xb8) == 0) ||
           (FUN_0132138c(**(long **)(lVar11 + 0xb8),iVar15,&local_58,*(undefined8 *)puVar3),
           local_58 == 0)) break;
        if (*(int *)(local_58 + 0x24) == param_2) goto LAB_024e3200;
      }
      iVar15 = iVar15 + 1;
    } while( true );
  }
LAB_024e3290:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
LAB_024e3200:
  lVar11 = *(long *)puVar5;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar11 = *(long *)puVar5;
  }
  if ((**(long **)(lVar11 + 0xb8) != 0) &&
     (FUN_0132138c(**(long **)(lVar11 + 0xb8),iVar15,&local_58,*(undefined8 *)puVar3), local_58 != 0
     )) {
    *(int *)(local_58 + 0x20) = *(int *)(local_58 + 0x20) + 1;
    if ((**(long **)(*(long *)puVar5 + 0xb8) != 0) &&
       (FUN_0132138c(**(long **)(*(long *)puVar5 + 0xb8),iVar15,&local_58,*(undefined8 *)puVar3),
       local_58 != 0)) {
      return *(long *)(local_58 + 0x18);
    }
  }
  goto LAB_024e3290;
}


