/*
FUNCTION_NAME: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag.AlignContentProperty$$get_Name
ENTRY_POINT: 05d004c4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 126
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


undefined4
UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_AlignContentProperty__get_Name
          (undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x20;
  int iVar15;
  undefined4 uVar16;
  long *plVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  long in_stack_00000010;
  undefined8 in_stack_00000030;
  undefined2 uStack000000000000003c;
  undefined1 uStack000000000000003e;
  undefined4 uStack0000000000000068;
  int iStack000000000000006c;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined4 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined4 in_stack_00000108;
  undefined4 uStack0000000000000118;
  int iStack000000000000011c;
  undefined4 uStack0000000000000120;
  float fStack0000000000000124;
  undefined4 uStack0000000000000128;
  float fStack000000000000012c;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined4 uStack0000000000000158;
  undefined4 uStack000000000000015c;
  undefined4 uStack0000000000000160;
  undefined4 uStack0000000000000164;
  float fStack0000000000000168;
  undefined1 uStack000000000000016c;
  undefined2 uStack000000000000016d;
  undefined1 uStack000000000000016f;
  undefined4 uStack0000000000000170;
  undefined4 uStack0000000000000174;
  undefined4 uStack0000000000000178;
  undefined4 uStack000000000000017c;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined4 uStack0000000000000190;
  undefined4 uStack0000000000000194;
  undefined8 in_stack_00000198;
  undefined4 in_stack_000001a0;
  long in_stack_000001a8;
  
  FUN_02b3c81c(*(undefined8 *)(param_3 + 0x748));
  *(undefined1 *)(unaff_x20 + 0x6df) = 1;
  in_stack_000000b0 = 0;
  uStack0000000000000068 = 0;
  iStack000000000000006c = 0;
  uStack000000000000003c = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  uStack000000000000003e = 0;
  memset(&stack0x00000108,0,0x90);
  puVar6 = Method_System_Reflection_SignatureType_GetEnumName__;
  uVar5 = DAT_01030798;
  plVar17 = *(long **)(unaff_x19 + 0x58);
  if (plVar17 != (long *)0x0) {
    uVar9 = 0;
    iVar15 = 0;
    bVar4 = true;
    do {
      lVar12 = *plVar17;
      lVar11 = *(long *)puVar6;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 6) * 0x10 + 0x138);
            goto LAB_05d00590;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_02b7654c(plVar17,lVar11,6);
LAB_05d00590:
      iVar8 = (*(code *)*puVar10)(plVar17,puVar10[1]);
      if (iVar8 <= iVar15) {
        if (bVar4) {
          *(undefined4 *)(unaff_x19 + 0x100) = 0;
          if (*(long *)(unaff_x19 + 0xf8) == 0) break;
          FUN_0444eb38(*(long *)(unaff_x19 + 0xf8),
                       *(undefined8 *)
                        Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
        }
        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000001a8) {
          return uVar9;
        }
        goto LAB_05d00a48;
      }
      plVar17 = *(long **)(unaff_x19 + 0x58);
      if (plVar17 == (long *)0x0) break;
      lVar12 = *plVar17;
      lVar11 = *(long *)puVar6;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 7) * 0x10 + 0x138);
            goto LAB_05d005fc;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_02b7654c(plVar17,lVar11,7);
LAB_05d005fc:
      (*(code *)*puVar10)(&stack0x000000c0,plVar17,iVar15,puVar10[1]);
      memcpy(&stack0x00000070,&stack0x000000c0,0x44);
      iVar8 = FUN_05d030c8(&stack0x00000070,0);
      if (iVar8 != 1) {
        iVar8 = FUN_05d030b0(&stack0x00000070,0);
        fVar24 = (float)param_2;
        if (iVar8 != 2) {
          lVar11 = *(long *)(unaff_x19 + 0xf8);
          uVar9 = FUN_05d03068(&stack0x00000070,0);
          if (lVar11 == 0) break;
          uVar13 = FUN_04450324(lVar11,uVar9,(long)&stack0x00000068 + 4,
                                *(undefined8 *)UnityEngine_SphereCollider_TypeInfo);
          if ((uVar13 & 1) == 0) {
            iStack000000000000006c = *(int *)(unaff_x19 + 0x100);
            lVar11 = *(long *)(unaff_x19 + 0xf8);
            *(int *)(unaff_x19 + 0x100) = iStack000000000000006c + 1;
            uVar9 = FUN_05d03068(&stack0x00000070,0);
            if (lVar11 == 0) break;
            FUN_0444e9b8(lVar11,uVar9,iStack000000000000006c,
                         *(undefined8 *)Pico_Platform_Models_SpeechError_TypeInfo);
          }
          FUN_05d03070(&stack0x00000070,0);
          uVar9 = FUN_05d01e24(&stack0x00000068);
          fVar25 = fVar24;
          uVar19 = FUN_05d03090(&stack0x00000070,0);
          iVar8 = FUN_05d030b0(&stack0x00000070,0);
          if (iVar8 < 3) {
            if (iVar8 == 0) {
              if (*(int *)(*(long *)
                            Method_System_Collections_Generic_KeyValuePair<Type,_XmlRootAttribute>_get_Key__
                          + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              uVar18 = 1;
              FUN_05d01e90(unaff_x19 + 0x108,in_stack_00000030,1);
              bVar4 = false;
              uVar16 = 3;
            }
            else if (iVar8 == 1) {
              uVar18 = 0;
              bVar4 = false;
              uVar16 = 1;
            }
            else {
LAB_05d0075c:
              uVar18 = 0;
              uVar16 = 1;
            }
          }
          else if (iVar8 == 3) {
            uVar26 = extraout_x1;
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_KeyValuePair<Type,_XmlRootAttribute>_get_Key__
                        + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              uVar26 = extraout_x1_01;
            }
            uVar18 = 1;
            FUN_05d01fdc(unaff_x19 + 0x108,uVar26,1);
            uVar16 = 4;
          }
          else {
            if (iVar8 != 4) goto LAB_05d0075c;
            uVar26 = extraout_x1;
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_KeyValuePair<Type,_XmlRootAttribute>_get_Key__
                        + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              uVar26 = extraout_x1_00;
            }
            uVar18 = 1;
            FUN_05d01fdc(unaff_x19 + 0x108,uVar26,1);
            uVar16 = 6;
          }
          iVar8 = iStack000000000000006c;
          uStack000000000000003c = 0;
          uStack000000000000003e = 0;
          if (DAT_066c1e96 == '\0') {
            FUN_02b3c81c(PTR_DAT_063132f8);
            DAT_066c1e96 = '\x01';
          }
          uVar7 = uStack0000000000000068;
          uVar26 = **(undefined8 **)(*(long *)PTR_DAT_063132f8 + 0xb8);
          uVar20 = FUN_05d030d0(&stack0x00000070,0);
          uVar21 = FUN_05d030d8(&stack0x00000070,0);
          uVar20 = FUN_05d02068(uVar20);
          fVar22 = (float)UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_HeightProperty__get_Name
                                    (&stack0x00000070,0);
          fVar23 = 1.0;
          if (**(float **)(*(long *)PTR_DAT_06315600 + 0xb8) < ABS(fVar22)) {
            fVar23 = (float)FUN_05d030b8(&stack0x00000070,0);
            fVar22 = (float)UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_HeightProperty__get_Name
                                      (&stack0x00000070,0);
            fVar23 = fVar23 / fVar22;
          }
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_KeyValuePair<Type,_XmlRootAttribute>_get_Key__
                      + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          if (*(long *)(unaff_x19 + 0x10) == 0) break;
          uVar1 = *(undefined4 *)(unaff_x19 + 0x10c);
          uVar2 = *(undefined4 *)(unaff_x19 + 0x118);
          uVar3 = *(undefined4 *)(*(long *)(unaff_x19 + 0x10) + 0x44);
          if (*(int *)(*(long *)PTR_DAT_0631f248 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          in_stack_00000198 = 0;
          in_stack_000000b8._4_2_ = uStack000000000000003c;
          in_stack_000000c8 = 0;
          in_stack_000000c0 = 0;
          in_stack_000000d8 = 0;
          in_stack_000000d0 = 0;
          fStack000000000000012c = -fVar25;
          in_stack_000000b8._6_1_ = uStack000000000000003e;
          in_stack_00000138 = 0;
          in_stack_00000130 = 0;
          *(undefined4 *)((undefined8 *)((ulong)&stack0x00000108 | 4) + 1) = 0;
          *(undefined8 *)((ulong)&stack0x00000108 | 4) = 0;
          param_2 = 0;
          uStack000000000000016f = uStack000000000000003e;
          in_stack_000001a0 = 0;
          iStack000000000000011c = iVar8;
          in_stack_00000148 = 0;
          in_stack_00000140 = 0;
          uStack0000000000000158 = uVar7;
          uStack0000000000000164 = 0;
          uStack000000000000016c = 0;
          uStack000000000000016d = uStack000000000000003c;
          uStack000000000000017c = 0;
          in_stack_00000180 = in_stack_00000030;
          in_stack_00000188 = uVar5;
          uStack0000000000000194 = 0;
          in_stack_00000108 = 2;
          uStack0000000000000118 = uVar16;
          uStack0000000000000120 = uVar9;
          fStack0000000000000124 = fVar24;
          uStack0000000000000128 = uVar19;
          in_stack_00000150 = uVar26;
          uStack000000000000015c = uVar20;
          uStack0000000000000160 = uVar21;
          fStack0000000000000168 = fVar23;
          uStack0000000000000170 = uVar18;
          uStack0000000000000174 = uVar1;
          uStack0000000000000178 = uVar2;
          uStack0000000000000190 = uVar3;
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_KeyValuePair<Type,_List<InstanceHandle>>_get_Key__
                      + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          FUN_05cfd954(&stack0x00000108);
          uVar9 = 1;
        }
      }
      plVar17 = *(long **)(unaff_x19 + 0x58);
      iVar15 = iVar15 + 1;
    } while (plVar17 != (long *)0x0);
  }
  if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000001a8) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
LAB_05d00a48:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


