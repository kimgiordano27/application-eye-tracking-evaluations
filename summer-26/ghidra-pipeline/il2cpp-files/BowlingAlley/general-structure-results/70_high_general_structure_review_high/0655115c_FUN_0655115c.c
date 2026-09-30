/*
FUNCTION_NAME: FUN_0655115c
ENTRY_POINT: 0655115c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_7;ui_or_gameplay_sink_hits_3;frame_or_lifecycle_behavior
*/


void FUN_0655115c(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_130 [88];
  undefined1 auStack_d8 [88];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  
  if ((DAT_076dfb5e & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07279b90);
    thunk_FUN_032e1da0(
                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<bool>_set_Value__
                      );
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    thunk_FUN_032e1da0(
                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<PokeStateData>_get_Value__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<PokeStateData>_set_Value__
                      );
    thunk_FUN_032e1da0(System_Text_UTF7Encoding_DecoderUTF7Fallback_TypeInfo);
    thunk_FUN_032e1da0(
                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<Quaternion>_Subscribe__
                      );
    thunk_FUN_032e1da0(PTR_DAT_0727cbe8);
    thunk_FUN_032e1da0(
                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<Quaternion>_SubscribeAndUpdate__
                      );
    DAT_076dfb5e = 1;
  }
  puVar3 = PTR_DAT_072794f0;
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  if (*(char *)(param_1 + 0x96) == '\0') {
    plVar10 = (long *)(param_1 + 0x20);
    lVar11 = *plVar10;
    if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar6 = FUN_06bece64(lVar11,0,0);
    puVar4 = 
    Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<PokeStateData>_get_Value__;
    if ((uVar6 & 1) == 0) {
      uVar15 = 0;
      do {
        lVar11 = *(long *)puVar4;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar11 = *(long *)puVar4;
        }
        auVar17._8_8_ = local_70._8_8_;
        auVar17._0_8_ = local_70._0_8_;
        piVar9 = *(int **)(lVar11 + 0xb8);
        if (*piVar9 <= (int)uVar15) goto LAB_065514bc;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          piVar9 = *(int **)(*(long *)puVar4 + 0xb8);
        }
        auVar2._8_8_ = local_80._8_8_;
        auVar2._0_8_ = local_80._0_8_;
        auVar1._8_8_ = local_70._8_8_;
        auVar1._0_8_ = local_70._0_8_;
        lVar11 = *(long *)(piVar9 + 2);
        if (lVar11 == 0) goto LAB_06551664;
        local_70 = auVar1;
        local_80 = auVar2;
        if (*(uint *)(lVar11 + 0x18) <= uVar15) goto LAB_06551668;
        lVar11 = *(long *)(lVar11 + (long)(int)uVar15 * 8 + 0x20);
        if (lVar11 == 0) goto LAB_06551664;
        uVar12 = *(undefined8 *)(lVar11 + 0x20);
        lVar11 = *plVar10;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar6 = FUN_06bece64(uVar12,lVar11,0);
        if ((uVar6 & 1) != 0) {
          lVar11 = *(long *)puVar4;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
            lVar11 = *(long *)puVar4;
          }
          lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
          if (lVar11 == 0) goto LAB_06551664;
          if (*(uint *)(lVar11 + 0x18) <= uVar15) goto LAB_06551668;
          uVar12 = *(undefined8 *)(lVar11 + (long)(int)uVar15 * 8 + 0x20);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          uVar6 = FUN_06be9890(uVar12,param_1,0);
          if ((uVar6 & 1) != 0) goto LAB_06551334;
        }
        uVar15 = uVar15 + 1;
      } while( true );
    }
  }
  return;
LAB_06551334:
  lVar11 = *plVar10;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  lVar7 = FUN_03afd774(lVar11,*(undefined8 *)
                               Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<bool>_set_Value__
                      );
  *plVar10 = lVar7;
  thunk_FUN_0333a630(plVar10,lVar7);
  if (lVar11 != 0) {
    auVar17 = FUN_064ad664(lVar11,0);
    puVar5 = 
    Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<Quaternion>_Subscribe__;
    puVar4 = PTR_DAT_0727cbe8;
    if (0 < auVar17._12_4_) {
      iVar14 = 0;
      do {
        local_70 = auVar17;
        auVar17 = FUN_064ad664(lVar11,0);
        local_70 = auVar17;
        lVar7 = FUN_04810434(local_70,iVar14,*(undefined8 *)puVar5);
        if (lVar7 == 0) goto LAB_06551664;
        iVar16 = 0;
        while( true ) {
          auVar17 = FUN_064b11ac(lVar7,0);
          local_80 = auVar17;
          if (auVar17._12_4_ <= iVar16) break;
          if (*plVar10 == 0) goto LAB_06551664;
          auVar17 = FUN_064ad664(*plVar10,0);
          local_70 = auVar17;
          uVar12 = FUN_04810434(local_70,iVar14,*(undefined8 *)puVar5);
          auVar17 = FUN_064ad664(lVar11,0);
          local_70 = auVar17;
          lVar7 = FUN_04810434(local_70,iVar14,*(undefined8 *)puVar5);
          if (lVar7 == 0) goto LAB_06551664;
          auVar17 = FUN_064b11ac(lVar7,0);
          local_80 = auVar17;
          FUN_0480ea04(auStack_d8,local_80,iVar16,*(undefined8 *)puVar4);
          memcpy(auStack_130,auStack_d8,0x58);
          FUN_064b6a84(uVar12,iVar16,auStack_130,0);
          iVar16 = iVar16 + 1;
          auVar17 = FUN_064ad664(lVar11,0);
          local_70 = auVar17;
          lVar7 = FUN_04810434(local_70,iVar14,*(undefined8 *)puVar5);
          if (lVar7 == 0) goto LAB_06551664;
        }
        iVar14 = iVar14 + 1;
        auVar17 = FUN_064ad664(lVar11,0);
      } while (iVar14 < auVar17._12_4_);
    }
LAB_065514bc:
    uVar12 = *(undefined8 *)(param_1 + 0x30);
    local_70 = auVar17;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar6 = FUN_06be9890(uVar12,0,0);
    if ((uVar6 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_06551664;
      FUN_06568f00(*(long *)(param_1 + 0x30),*plVar10,0);
    }
    puVar4 = 
    Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<Quaternion>_SubscribeAndUpdate__
    ;
    puVar3 = PTR_DAT_07279b90;
    uVar15 = *(uint *)(param_1 + 0x28);
    if (uVar15 < 2) {
      FUN_0655438c(param_1);
      if (*(long *)(param_1 + 0x98) == 0) {
        FUN_0655455c(param_1);
      }
    }
    else if (uVar15 == 2) {
      lVar11 = *(long *)(param_1 + 0x50);
      if ((lVar11 != 0) && (uVar15 = *(uint *)(lVar11 + 0x18), 0 < (int)uVar15)) {
        lVar7 = 0;
        do {
          if (uVar15 <= (uint)lVar7) {
LAB_06551668:
                    /* WARNING: Subroutine does not return */
            Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
          }
          lVar13 = *(long *)(lVar11 + 0x20 + lVar7 * 8);
          if (lVar13 == 0) goto LAB_06551664;
          uVar12 = *(undefined8 *)(lVar13 + 0x30);
          uVar6 = FUN_057ab1f0(uVar12,0);
          if ((uVar6 & 1) == 0) {
            if (*plVar10 == 0) goto LAB_06551664;
            lVar8 = FUN_064adc84(*plVar10,uVar12,0,0);
            if (lVar8 != 0) {
              uVar12 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
              System_Array_EmptyInternalEnumerator<Dictionary_Entry<object,_float3>>__Dispose
                        (uVar12,lVar13,*(undefined8 *)puVar4,0);
              FUN_064ab7a4(lVar8,uVar12,0);
              uVar12 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
              System_Array_EmptyInternalEnumerator<Dictionary_Entry<object,_float3>>__Dispose
                        (uVar12,lVar13,*(undefined8 *)puVar4,0);
              FUN_064ab6f4(lVar8,uVar12,0);
              uVar12 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
              System_Array_EmptyInternalEnumerator<Dictionary_Entry<object,_float3>>__Dispose
                        (uVar12,lVar13,*(undefined8 *)puVar4,0);
              FUN_064ab644(lVar8,uVar12,0);
            }
          }
          uVar15 = *(uint *)(lVar11 + 0x18);
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 < (int)uVar15);
      }
    }
    else if (uVar15 == 3) {
      FUN_0655438c(param_1);
    }
    *(undefined1 *)(param_1 + 0x96) = 1;
    return;
  }
LAB_06551664:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


