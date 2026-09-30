/*
FUNCTION_NAME: FUN_05d0041c
ENTRY_POINT: 05d0041c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 196
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_2
*/


undefined4 FUN_05d0041c(undefined1 param_1 [16],undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  int iVar16;
  undefined4 uVar17;
  long *plVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  undefined4 local_1e8;
  int iStack_1e4;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  undefined2 local_194;
  undefined1 local_192;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_148 [4];
  undefined4 local_138;
  int local_134;
  undefined4 local_130;
  float local_12c;
  undefined4 local_128;
  float local_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  float local_e8;
  undefined1 local_e4;
  undefined2 local_e3;
  undefined1 local_e1;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  long local_a8;
  
  lVar4 = tpidr_el0;
  local_a8 = *(long *)(lVar4 + 0x28);
  if ((DAT_066da6df & 1) == 0) {
    FUN_02b3c81c(Pico_Platform_Models_SpeechError_TypeInfo);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    FUN_02b3c81c(UnityEngine_SphereCollider_TypeInfo);
    FUN_02b3c81c(
                Method_System_Collections_Generic_KeyValuePair<Type,_List<InstanceHandle>>_get_Key__
                );
    FUN_02b3c81c(PTR_DAT_0631f248);
    FUN_02b3c81c(Method_System_Reflection_SignatureType_GetEnumName__);
    FUN_02b3c81c(PTR_DAT_06315600);
    FUN_02b3c81c(Method_System_Collections_Generic_KeyValuePair<Type,_XmlRootAttribute>_get_Key__);
    DAT_066da6df = 1;
  }
  local_1a0 = 0;
  local_1e8 = 0;
  iStack_1e4 = 0;
  uStack_1d8 = 0;
  local_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  memset(local_148,0,0x90);
  puVar7 = Method_System_Reflection_SignatureType_GetEnumName__;
  uVar6 = DAT_01030798;
  plVar18 = *(long **)(param_3 + 0x58);
  if (plVar18 != (long *)0x0) {
    uVar10 = 0;
    iVar16 = 0;
    bVar5 = true;
    do {
      lVar13 = *plVar18;
      lVar12 = *(long *)puVar7;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar12) {
            puVar11 = (undefined8 *)(lVar13 + (long)(*piVar15 + 6) * 0x10 + 0x138);
            goto LAB_05d00590;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar11 = (undefined8 *)FUN_02b7654c(plVar18,lVar12,6);
LAB_05d00590:
      iVar9 = (*(code *)*puVar11)(plVar18,puVar11[1]);
      if (iVar9 <= iVar16) {
        if (bVar5) {
          *(undefined4 *)(param_3 + 0x100) = 0;
          if (*(long *)(param_3 + 0xf8) == 0) break;
          FUN_0444eb38(*(long *)(param_3 + 0xf8),
                       *(undefined8 *)
                        Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
        }
        if (*(long *)(lVar4 + 0x28) == local_a8) {
          return uVar10;
        }
        goto LAB_05d00a48;
      }
      plVar18 = *(long **)(param_3 + 0x58);
      if (plVar18 == (long *)0x0) break;
      lVar13 = *plVar18;
      lVar12 = *(long *)puVar7;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar12) {
            puVar11 = (undefined8 *)(lVar13 + (long)(*piVar15 + 7) * 0x10 + 0x138);
            goto LAB_05d005fc;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar11 = (undefined8 *)FUN_02b7654c(plVar18,lVar12,7);
LAB_05d005fc:
      (*(code *)*puVar11)(&local_190,plVar18,iVar16,puVar11[1]);
      memcpy(&local_1e0,&local_190,0x44);
      iVar9 = FUN_05d030c8(&local_1e0,0);
      if (iVar9 != 1) {
        iVar9 = FUN_05d030b0(&local_1e0,0);
        fVar25 = (float)param_2;
        if (iVar9 != 2) {
          lVar12 = *(long *)(param_3 + 0xf8);
          uVar10 = FUN_05d03068(&local_1e0,0);
          if (lVar12 == 0) break;
          uVar14 = FUN_04450324(lVar12,uVar10,&iStack_1e4,
                                *(undefined8 *)UnityEngine_SphereCollider_TypeInfo);
          if ((uVar14 & 1) == 0) {
            iStack_1e4 = *(int *)(param_3 + 0x100);
            lVar12 = *(long *)(param_3 + 0xf8);
            *(int *)(param_3 + 0x100) = iStack_1e4 + 1;
            uVar10 = FUN_05d03068(&local_1e0,0);
            if (lVar12 == 0) break;
            FUN_0444e9b8(lVar12,uVar10,iStack_1e4,
                         *(undefined8 *)Pico_Platform_Models_SpeechError_TypeInfo);
          }
          FUN_05d03070(&local_1e0,0);
          uVar10 = FUN_05d01e24(&local_1e8);
          fVar26 = fVar25;
          uVar20 = FUN_05d03090(&local_1e0,0);
          iVar9 = FUN_05d030b0(&local_1e0,0);
          if (iVar9 < 3) {
            if (iVar9 == 0) {
              if (*(int *)(*(long *)
                            Method_System_Collections_Generic_KeyValuePair<Type,_XmlRootAttribute>_get_Key__
                          + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              uVar19 = 1;
              FUN_05d01e90(param_3 + 0x108,param_4,1);
              bVar5 = false;
              uVar17 = 3;
            }
            else if (iVar9 == 1) {
              uVar19 = 0;
              bVar5 = false;
              uVar17 = 1;
            }
            else {
LAB_05d0075c:
              uVar19 = 0;
              uVar17 = 1;
            }
          }
          else if (iVar9 == 3) {
            uVar27 = extraout_x1;
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_KeyValuePair<Type,_XmlRootAttribute>_get_Key__
                        + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              uVar27 = extraout_x1_01;
            }
            uVar19 = 1;
            FUN_05d01fdc(param_3 + 0x108,uVar27,1);
            uVar17 = 4;
          }
          else {
            if (iVar9 != 4) goto LAB_05d0075c;
            uVar27 = extraout_x1;
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_KeyValuePair<Type,_XmlRootAttribute>_get_Key__
                        + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              uVar27 = extraout_x1_00;
            }
            uVar19 = 1;
            FUN_05d01fdc(param_3 + 0x108,uVar27,1);
            uVar17 = 6;
          }
          iVar9 = iStack_1e4;
          if (DAT_066c1e96 == '\0') {
            FUN_02b3c81c(PTR_DAT_063132f8);
            DAT_066c1e96 = '\x01';
          }
          uVar8 = local_1e8;
          uVar27 = **(undefined8 **)(*(long *)PTR_DAT_063132f8 + 0xb8);
          uVar21 = FUN_05d030d0(&local_1e0,0);
          uVar22 = FUN_05d030d8(&local_1e0,0);
          uVar21 = FUN_05d02068(uVar21);
          fVar23 = (float)UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_HeightProperty__get_Name
                                    (&local_1e0,0);
          fVar24 = 1.0;
          if (**(float **)(*(long *)PTR_DAT_06315600 + 0xb8) < ABS(fVar23)) {
            fVar24 = (float)FUN_05d030b8(&local_1e0,0);
            fVar23 = (float)UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_HeightProperty__get_Name
                                      (&local_1e0,0);
            fVar24 = fVar24 / fVar23;
          }
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_KeyValuePair<Type,_XmlRootAttribute>_get_Key__
                      + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          if (*(long *)(param_3 + 0x10) == 0) break;
          uVar1 = *(undefined4 *)(param_3 + 0x10c);
          uVar2 = *(undefined4 *)(param_3 + 0x118);
          uVar3 = *(undefined4 *)(*(long *)(param_3 + 0x10) + 0x44);
          if (*(int *)(*(long *)PTR_DAT_0631f248 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          local_b8 = 0;
          local_194 = 0;
          uStack_188 = 0;
          local_190 = 0;
          uStack_178 = 0;
          local_180 = 0;
          local_124 = -fVar26;
          local_192 = 0;
          uStack_118 = 0;
          local_120 = 0;
          *(undefined4 *)((undefined8 *)((ulong)local_148 | 4) + 1) = 0;
          *(undefined8 *)((ulong)local_148 | 4) = 0;
          param_2 = 0;
          local_e1 = 0;
          local_b0 = 0;
          local_134 = iVar9;
          uStack_108 = 0;
          local_110 = 0;
          local_f8 = uVar8;
          local_ec = 0;
          local_e4 = 0;
          local_e3 = 0;
          local_d4 = 0;
          local_c8 = uVar6;
          local_bc = 0;
          local_148[0] = 2;
          local_138 = uVar17;
          local_130 = uVar10;
          local_12c = fVar25;
          local_128 = uVar20;
          local_100 = uVar27;
          local_f4 = uVar21;
          local_f0 = uVar22;
          local_e8 = fVar24;
          local_e0 = uVar19;
          local_dc = uVar1;
          local_d8 = uVar2;
          local_d0 = param_4;
          local_c0 = uVar3;
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_KeyValuePair<Type,_List<InstanceHandle>>_get_Key__
                      + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          FUN_05cfd954(local_148);
          uVar10 = 1;
        }
      }
      plVar18 = *(long **)(param_3 + 0x58);
      iVar16 = iVar16 + 1;
    } while (plVar18 != (long *)0x0);
  }
  if (*(long *)(lVar4 + 0x28) == local_a8) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
LAB_05d00a48:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


