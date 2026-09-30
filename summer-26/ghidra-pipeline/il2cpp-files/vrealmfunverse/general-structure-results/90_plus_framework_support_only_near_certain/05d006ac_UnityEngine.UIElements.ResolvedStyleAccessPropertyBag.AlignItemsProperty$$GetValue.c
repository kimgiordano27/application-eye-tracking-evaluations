/*
FUNCTION_NAME: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag.AlignItemsProperty$$GetValue
ENTRY_POINT: 05d006ac
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 153
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


undefined8
UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_AlignItemsProperty__GetValue
          (undefined **param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,
          ulong param_5,ulong param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  int unaff_w21;
  undefined4 uVar11;
  long unaff_x23;
  long *plVar12;
  undefined4 uVar13;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000068;
  uint uStack000000000000006c;
  undefined8 in_stack_000000b8;
  undefined4 in_stack_00000108;
  undefined4 uStack0000000000000118;
  uint uStack000000000000011c;
  undefined4 uStack0000000000000120;
  float fStack0000000000000124;
  undefined4 uStack0000000000000128;
  float fStack000000000000012c;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
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
  undefined4 uStack0000000000000190;
  undefined4 uStack0000000000000194;
  undefined4 in_stack_000001a0;
  long in_stack_000001a8;
  
  do {
    FUN_0444e9b8(unaff_x23,param_5,param_6,*(undefined8 *)param_1[0x7a]);
    do {
      fVar20 = (float)param_3;
      FUN_05d03070(&stack0x00000070,0);
      uVar14 = FUN_05d01e24(&stack0x00000068);
      fVar21 = fVar20;
      uVar15 = FUN_05d03090(&stack0x00000070,0);
      iVar6 = FUN_05d030b0(&stack0x00000070,0);
      if (iVar6 < 3) {
        if (iVar6 == 0) {
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_KeyValuePair<Type,_XmlRootAttribute>_get_Key__
                      + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar13 = 1;
          FUN_05d01e90(unaff_x19 + 0x108,in_stack_00000030,1);
          in_stack_00000018._4_4_ = 0;
          uVar11 = 3;
        }
        else if (iVar6 == 1) {
          uVar13 = 0;
          in_stack_00000018._4_4_ = 0;
          uVar11 = 1;
        }
        else {
LAB_05d0075c:
          uVar13 = 0;
          uVar11 = 1;
        }
      }
      else if (iVar6 == 3) {
        uVar22 = extraout_x1;
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_KeyValuePair<Type,_XmlRootAttribute>_get_Key__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          uVar22 = extraout_x1_01;
        }
        uVar13 = 1;
        FUN_05d01fdc(unaff_x19 + 0x108,uVar22,1);
        uVar11 = 4;
      }
      else {
        if (iVar6 != 4) goto LAB_05d0075c;
        uVar22 = extraout_x1;
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_KeyValuePair<Type,_XmlRootAttribute>_get_Key__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          uVar22 = extraout_x1_00;
        }
        uVar13 = 1;
        FUN_05d01fdc(unaff_x19 + 0x108,uVar22,1);
        uVar11 = 6;
      }
      uVar5 = uStack000000000000006c;
      if (DAT_066c1e96 == '\0') {
        FUN_02b3c81c(PTR_DAT_063132f8);
        DAT_066c1e96 = '\x01';
      }
      uVar4 = uStack0000000000000068;
      uVar22 = **(undefined8 **)(*(long *)PTR_DAT_063132f8 + 0xb8);
      uVar16 = FUN_05d030d0(&stack0x00000070,0);
      uVar17 = FUN_05d030d8(&stack0x00000070,0);
      uVar16 = FUN_05d02068(uVar16);
      fVar18 = (float)UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_HeightProperty__get_Name
                                (&stack0x00000070,0);
      fVar19 = 1.0;
      if (**(float **)(*(long *)PTR_DAT_06315600 + 0xb8) < ABS(fVar18)) {
        fVar19 = (float)FUN_05d030b8(&stack0x00000070,0);
        fVar18 = (float)UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_HeightProperty__get_Name
                                  (&stack0x00000070,0);
        fVar19 = fVar19 / fVar18;
      }
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_KeyValuePair<Type,_XmlRootAttribute>_get_Key__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_05d009c4;
      uVar1 = *(undefined4 *)(unaff_x19 + 0x10c);
      uVar2 = *(undefined4 *)(unaff_x19 + 0x118);
      uVar3 = *(undefined4 *)(*(long *)(unaff_x19 + 0x10) + 0x44);
      if (*(int *)(*(long *)PTR_DAT_0631f248 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      unaff_x26[0x1b] = 0;
      in_stack_000000b8._4_2_ = 0;
      unaff_x26[1] = 0;
      *unaff_x26 = 0;
      unaff_x26[3] = 0;
      unaff_x26[2] = 0;
      fStack000000000000012c = -fVar21;
      in_stack_000000b8._6_1_ = 0;
      in_stack_00000138 = 0;
      in_stack_00000130 = 0;
      *(undefined4 *)(in_stack_00000028 + 1) = 0;
      *in_stack_00000028 = 0;
      in_stack_00000148 = unaff_x26[3];
      param_3 = unaff_x26[2];
      uStack000000000000016f = 0;
      in_stack_000001a0 = 0;
      uStack000000000000011c = uVar5;
      unaff_x26[0x12] = uVar22;
      uStack0000000000000158 = uVar4;
      uStack0000000000000164 = 0;
      uStack000000000000016c = 0;
      uStack000000000000016d = 0;
      uStack000000000000017c = 0;
      unaff_x26[0x18] = in_stack_00000030;
      unaff_x26[0x19] = in_stack_00000020;
      uStack0000000000000194 = 0;
      in_stack_00000108 = 2;
      uStack0000000000000118 = uVar11;
      uStack0000000000000120 = uVar14;
      fStack0000000000000124 = fVar20;
      uStack0000000000000128 = uVar15;
      in_stack_00000140 = param_3;
      uStack000000000000015c = uVar16;
      uStack0000000000000160 = uVar17;
      fStack0000000000000168 = fVar19;
      uStack0000000000000170 = uVar13;
      uStack0000000000000174 = uVar1;
      uStack0000000000000178 = uVar2;
      uStack0000000000000190 = uVar3;
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_KeyValuePair<Type,_List<InstanceHandle>>_get_Key__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05cfd954(&stack0x00000108);
      do {
        plVar12 = *(long **)(unaff_x19 + 0x58);
        unaff_w21 = unaff_w21 + 1;
        if (plVar12 == (long *)0x0) goto LAB_05d009c4;
        lVar8 = *plVar12;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x27) {
              puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 6) * 0x10 + 0x138);
              goto LAB_05d00590;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)FUN_02b7654c(plVar12,*unaff_x27,6);
LAB_05d00590:
        iVar6 = (*(code *)*puVar7)(plVar12,puVar7[1]);
        if (iVar6 <= unaff_w21) {
          if ((in_stack_00000018._4_4_ & 1) != 0) {
            *(undefined4 *)(unaff_x19 + 0x100) = 0;
            if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_05d009c4;
            FUN_0444eb38(*(long *)(unaff_x19 + 0xf8),
                         *(undefined8 *)
                          Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                        );
          }
          if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000001a8) {
            return 1;
          }
          goto LAB_05d00a48;
        }
        plVar12 = *(long **)(unaff_x19 + 0x58);
        if (plVar12 == (long *)0x0) goto LAB_05d009c4;
        lVar8 = *plVar12;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x27) {
              puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 7) * 0x10 + 0x138);
              goto LAB_05d005fc;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)FUN_02b7654c(plVar12,*unaff_x27,7);
LAB_05d005fc:
        (*(code *)*puVar7)(&stack0x000000c0,plVar12,unaff_w21,puVar7[1]);
        memcpy(&stack0x00000070,&stack0x000000c0,0x44);
        iVar6 = FUN_05d030c8(&stack0x00000070,0);
      } while ((iVar6 == 1) || (iVar6 = FUN_05d030b0(&stack0x00000070,0), iVar6 == 2));
      lVar8 = *(long *)(unaff_x19 + 0xf8);
      uVar14 = FUN_05d03068(&stack0x00000070,0);
      if (lVar8 == 0) goto LAB_05d009c4;
      uVar9 = FUN_04450324(lVar8,uVar14,(long)&stack0x00000068 + 4,
                           *(undefined8 *)UnityEngine_SphereCollider_TypeInfo);
    } while ((uVar9 & 1) != 0);
    uStack000000000000006c = *(uint *)(unaff_x19 + 0x100);
    unaff_x23 = *(long *)(unaff_x19 + 0xf8);
    *(uint *)(unaff_x19 + 0x100) = uStack000000000000006c + 1;
    param_5 = FUN_05d03068(&stack0x00000070,0);
    if (unaff_x23 == 0) {
LAB_05d009c4:
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000001a8) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
LAB_05d00a48:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    param_1 = &SerializedSoftJointLimitSpring_TypeInfo;
    param_6 = (ulong)uStack000000000000006c;
    param_5 = param_5 & 0xffffffff;
  } while( true );
}


