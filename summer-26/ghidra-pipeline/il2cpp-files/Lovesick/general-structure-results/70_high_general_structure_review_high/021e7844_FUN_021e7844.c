/*
FUNCTION_NAME: FUN_021e7844
ENTRY_POINT: 021e7844
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


long FUN_021e7844(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_48 [2];
  
  puVar4 = StringLiteral_7948;
  if ((DAT_037817b8 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_1385);
    thunk_FUN_00d48444(StringLiteral_3550);
    thunk_FUN_00d48444(
                      Method_CableSwitchBox_<HideCoroutine>d__22_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<BodyJointId,_Pose>_set_Item__);
    thunk_FUN_00d48444(PTR_DAT_033ef048);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_Start<VRequest_<RequestFileHeaders>d__104>__
                      );
    thunk_FUN_00d48444(StringLiteral_11254);
    thunk_FUN_00d48444(OVR_OpenVR_VREvent_t_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_7948);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033ed6c8);
    thunk_FUN_00d48444(UnityEngine_TextCore_Text_TextElementInfo___TypeInfo);
    DAT_037817b8 = 1;
  }
  local_48[0] = 0;
  local_70 = 0;
  uStack_68 = 0;
  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
  puVar3 = StringLiteral_3550;
  puVar4 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_Start<VRequest_<RequestFileHeaders>d__104>__
  ;
  if (lVar6 == 0) goto LAB_021e7cc0;
  FUN_01320e50(lVar6,*(undefined8 *)OVR_OpenVR_VREvent_t_TypeInfo);
  lVar7 = FUN_010c8250(param_2,1,*(undefined8 *)puVar3);
  puVar3 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  local_48[0] = 0;
  if (lVar7 == 0) {
LAB_021e7a80:
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_021e7cdc(param_2,lVar6,param_1);
    if (lVar7 == 0) goto LAB_021e7afc;
LAB_021e7aa4:
    uVar8 = FUN_015ff8a0(*(undefined8 *)(lVar7 + 0x18),0);
    if ((uVar8 & 1) == 0) {
      FUN_021fe1f0(local_48,*(undefined8 *)(lVar7 + 0x18),0);
    }
    local_70 = 0;
    uStack_68 = 0;
    FUN_021f605c(&local_70,*(undefined8 *)(lVar7 + 0x28),0);
  }
  else {
    uVar14 = *(undefined8 *)(lVar7 + 0x10);
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar8 = FUN_0178a8c4(uVar14,0,0);
    puVar5 = Method_System_Collections_Generic_Dictionary<BodyJointId,_Pose>_set_Item__;
    if ((uVar8 & 1) == 0) goto LAB_021e7a80;
    uVar14 = *(undefined8 *)(lVar7 + 0x10);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_021e7cdc(uVar14,lVar6,param_1);
    uVar14 = *(undefined8 *)puVar5;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar9 = (long *)FUN_01780344(uVar14,0);
    if (plVar9 == (long *)0x0) goto LAB_021e7cc0;
    uVar8 = (**(code **)(*plVar9 + 0x2c8))
                      (plVar9,*(undefined8 *)(lVar7 + 0x10),*(undefined8 *)(*plVar9 + 0x2d0));
    if ((uVar8 & 1) == 0) goto LAB_021e7aa4;
    lVar10 = FUN_0179c590(*(undefined8 *)(lVar7 + 0x10),0);
    puVar3 = PTR_DAT_033ef048;
    if (lVar10 == 0) goto LAB_021e7cc0;
    uVar14 = *(undefined8 *)PTR_DAT_033ef048;
    lVar11 = thunk_FUN_00d6225c(lVar10,uVar14);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(lVar10,uVar14);
    }
    lVar11 = *(long *)puVar3;
    plVar9 = (long *)thunk_FUN_00d6225c(lVar10,lVar11);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(lVar10,lVar11);
    }
    lVar10 = *plVar9;
    uVar8 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar8 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar11) {
          puVar12 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_021e7ae8;
        }
        uVar8 = uVar8 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar8 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar9,lVar11,0);
LAB_021e7ae8:
    local_48[0] = (*(code *)*puVar12)(plVar9,puVar12[1]);
    if (lVar7 != 0) goto LAB_021e7aa4;
LAB_021e7afc:
    local_70 = 0;
    uStack_68 = 0;
  }
  lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
  puVar4 = StringLiteral_11254;
  if (lVar10 != 0) {
    FUN_017b46ec(lVar10,0);
    local_60 = 0;
    uStack_58 = 0;
    FUN_021f605c(&local_60,param_1,0);
    *(undefined8 *)(lVar10 + 0x20) = param_2;
    *(undefined8 *)(lVar10 + 0x18) = uStack_58;
    *(undefined8 *)(lVar10 + 0x10) = local_60;
    uVar14 = FUN_01325140(lVar6,*(undefined8 *)puVar4);
    *(undefined8 *)(lVar10 + 0x90) = uVar14;
    *(undefined4 *)(lVar10 + 0x38) = local_48[0];
    *(undefined8 *)(lVar10 + 0x30) = uStack_68;
    *(undefined8 *)(lVar10 + 0x28) = local_70;
    if (lVar7 == 0) {
      *(undefined2 *)(lVar10 + 0x40) = 0;
      *(uint *)(lVar10 + 0xa8) = *(uint *)(lVar10 + 0xa8) & 0xfffffffc;
      *(undefined8 *)(lVar10 + 0x98) = 0;
      *(undefined8 *)(lVar10 + 0xa0) = 0;
      FUN_021e7090(lVar10,0);
      *(uint *)(lVar10 + 0xa8) = *(uint *)(lVar10 + 0xa8) & 0xffffffdf;
    }
    else {
      *(undefined2 *)(lVar10 + 0x40) = *(undefined2 *)(lVar7 + 0x33);
      uVar2 = *(uint *)(lVar10 + 0xa8) & 0xfffffffe;
      if (*(char *)(lVar7 + 0x35) != '\0') {
        uVar2 = *(uint *)(lVar10 + 0xa8) | 1;
      }
      *(uint *)(lVar10 + 0xa8) = uVar2;
      uVar1 = uVar2 & 0xfffffffd;
      if (*(char *)(lVar7 + 0x48) != '\0') {
        uVar1 = uVar2 | 2;
      }
      *(uint *)(lVar10 + 0xa8) = uVar1;
      uVar14 = *(undefined8 *)(lVar7 + 0x38);
      *(undefined8 *)(lVar10 + 0xa0) = *(undefined8 *)(lVar7 + 0x40);
      *(undefined8 *)(lVar10 + 0x98) = uVar14;
      FUN_021e7090(lVar10,*(undefined2 *)(lVar7 + 0x31));
      uVar2 = *(uint *)(lVar10 + 0xa8) & 0xffffffdf;
      if (*(char *)(lVar7 + 0x30) != '\0') {
        uVar2 = *(uint *)(lVar10 + 0xa8) | 0x20;
      }
      *(uint *)(lVar10 + 0xa8) = uVar2;
      puVar4 = UnityEngine_TextCore_Text_TextElementInfo___TypeInfo;
      lVar6 = *(long *)(lVar7 + 0x20);
      if (lVar6 != 0) {
        lVar7 = *(long *)UnityEngine_TextCore_Text_TextElementInfo___TypeInfo;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar7 = *(long *)puVar4;
        }
        puVar3 = Method_CableSwitchBox_<HideCoroutine>d__22_System_Collections_IEnumerator_Reset__;
        lVar11 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
        if (lVar11 == 0) {
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar7 = *(long *)puVar4;
          }
          uVar14 = **(undefined8 **)(lVar7 + 0xb8);
          lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
          if (lVar11 == 0) goto LAB_021e7cc0;
          FUN_012d239c(lVar11,uVar14,*(undefined8 *)PTR_DAT_033ed6c8,0);
          *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8) = lVar11;
        }
        uVar14 = FUN_010b5ad8(lVar6,lVar11,*(undefined8 *)StringLiteral_1385);
        *(undefined8 *)(lVar10 + 0x88) = uVar14;
      }
    }
    return lVar10;
  }
LAB_021e7cc0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


