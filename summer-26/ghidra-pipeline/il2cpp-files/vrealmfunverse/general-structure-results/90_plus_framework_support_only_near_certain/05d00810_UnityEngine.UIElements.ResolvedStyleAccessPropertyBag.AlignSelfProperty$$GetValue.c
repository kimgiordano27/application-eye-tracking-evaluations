/*
FUNCTION_NAME: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag.AlignSelfProperty$$GetValue
ENTRY_POINT: 05d00810
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


undefined8
UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_AlignSelfProperty__GetValue
          (undefined **param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  int unaff_w21;
  int unaff_w22;
  ulong unaff_x23;
  long *plVar10;
  undefined4 unaff_w24;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined4 unaff_s8;
  float unaff_s9;
  undefined4 unaff_s10;
  float unaff_s11;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined4 uStack0000000000000068;
  int iStack000000000000006c;
  undefined8 in_stack_000000b8;
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
  
  while( true ) {
    uVar5 = uStack0000000000000068;
    uVar16 = **(undefined8 **)(*(long *)param_1[0x5f] + 0xb8);
    uVar11 = FUN_05d030d0(param_2,param_3);
    uVar12 = FUN_05d030d8(&stack0x00000070,0);
    uVar11 = FUN_05d02068(uVar11);
    fVar13 = (float)UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_HeightProperty__get_Name
                              (&stack0x00000070,0);
    fVar14 = 1.0;
    if (**(float **)(*(long *)PTR_DAT_06315600 + 0xb8) < ABS(fVar13)) {
      fVar14 = (float)FUN_05d030b8(&stack0x00000070,0);
      fVar13 = (float)UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_HeightProperty__get_Name
                                (&stack0x00000070,0);
      fVar14 = fVar14 / fVar13;
    }
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_KeyValuePair<Type,_XmlRootAttribute>_get_Key__ +
                0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (*(long *)(unaff_x19 + 0x10) == 0) break;
    uVar1 = *(undefined4 *)(unaff_x19 + 0x10c);
    uVar2 = *(undefined4 *)(unaff_x19 + 0x118);
    uVar3 = *(undefined4 *)(*(long *)(unaff_x19 + 0x10) + 0x44);
    if (*(int *)(*(long *)PTR_DAT_0631f248 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    unaff_x26[0x1b] = 0;
    in_stack_000000b8._4_2_ = in_stack_00000038._4_2_;
    unaff_x26[1] = in_stack_00000048;
    *unaff_x26 = in_stack_00000040;
    unaff_x26[3] = in_stack_00000058;
    unaff_x26[2] = in_stack_00000050;
    fStack000000000000012c = -unaff_s11;
    in_stack_000000b8._6_1_ = in_stack_00000038._6_1_;
    in_stack_00000138 = in_stack_00000048;
    in_stack_00000130 = in_stack_00000040;
    *(undefined4 *)(in_stack_00000028 + 1) = 0;
    *in_stack_00000028 = 0;
    in_stack_00000148 = unaff_x26[3];
    uVar15 = unaff_x26[2];
    uStack000000000000016f = in_stack_00000038._6_1_;
    in_stack_000001a0 = 0;
    unaff_x26[0x12] = uVar16;
    uStack0000000000000158 = uVar5;
    uStack0000000000000164 = 0;
    uStack000000000000016c = 0;
    uStack000000000000016d = in_stack_00000038._4_2_;
    uStack000000000000017c = 0;
    unaff_x26[0x18] = in_stack_00000030;
    unaff_x26[0x19] = in_stack_00000020;
    uStack0000000000000194 = 0;
    uStack0000000000000118 = (undefined4)unaff_x23;
    in_stack_00000108 = 2;
    iStack000000000000011c = unaff_w22;
    uStack0000000000000120 = unaff_s8;
    fStack0000000000000124 = unaff_s9;
    uStack0000000000000128 = unaff_s10;
    in_stack_00000140 = uVar15;
    uStack000000000000015c = uVar11;
    uStack0000000000000160 = uVar12;
    fStack0000000000000168 = fVar14;
    uStack0000000000000170 = unaff_w24;
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
      do {
        plVar10 = *(long **)(unaff_x19 + 0x58);
        unaff_w21 = unaff_w21 + 1;
        if (plVar10 == (long *)0x0) goto LAB_05d009c4;
        lVar7 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x27) {
              puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 6) * 0x10 + 0x138);
              goto LAB_05d00590;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_02b7654c(plVar10,*unaff_x27,6);
LAB_05d00590:
        iVar4 = (*(code *)*puVar6)(plVar10,puVar6[1]);
        if (iVar4 <= unaff_w21) {
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
        plVar10 = *(long **)(unaff_x19 + 0x58);
        if (plVar10 == (long *)0x0) goto LAB_05d009c4;
        lVar7 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x27) {
              puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 7) * 0x10 + 0x138);
              goto LAB_05d005fc;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_02b7654c(plVar10,*unaff_x27,7);
LAB_05d005fc:
        (*(code *)*puVar6)(&stack0x000000c0,plVar10,unaff_w21,puVar6[1]);
        memcpy(&stack0x00000070,&stack0x000000c0,0x44);
        iVar4 = FUN_05d030c8(&stack0x00000070,0);
      } while (iVar4 == 1);
      iVar4 = FUN_05d030b0(&stack0x00000070,0);
      unaff_s9 = (float)uVar15;
    } while (iVar4 == 2);
    lVar7 = *(long *)(unaff_x19 + 0xf8);
    uVar5 = FUN_05d03068(&stack0x00000070,0);
    if (lVar7 == 0) break;
    uVar8 = FUN_04450324(lVar7,uVar5,(long)&stack0x00000068 + 4,
                         *(undefined8 *)UnityEngine_SphereCollider_TypeInfo);
    if ((uVar8 & 1) == 0) {
      iStack000000000000006c = *(int *)(unaff_x19 + 0x100);
      lVar7 = *(long *)(unaff_x19 + 0xf8);
      *(int *)(unaff_x19 + 0x100) = iStack000000000000006c + 1;
      uVar5 = FUN_05d03068(&stack0x00000070,0);
      if (lVar7 == 0) break;
      FUN_0444e9b8(lVar7,uVar5,iStack000000000000006c,
                   *(undefined8 *)Pico_Platform_Models_SpeechError_TypeInfo);
    }
    FUN_05d03070(&stack0x00000070,0);
    unaff_s8 = FUN_05d01e24(&stack0x00000068);
    unaff_s11 = unaff_s9;
    unaff_s10 = FUN_05d03090(&stack0x00000070,0);
    auVar17 = FUN_05d030b0(&stack0x00000070,0);
    uVar16 = auVar17._8_8_;
    unaff_x23 = auVar17._0_8_ & 0xffffffff;
    iVar4 = auVar17._0_4_;
    if (iVar4 < 3) {
      if (iVar4 == 0) {
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_KeyValuePair<Type,_XmlRootAttribute>_get_Key__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        unaff_w24 = 1;
        FUN_05d01e90(unaff_x19 + 0x108,in_stack_00000030,1);
        in_stack_00000018._4_4_ = 0;
        unaff_x23 = 3;
      }
      else if (iVar4 == 1) {
        unaff_w24 = 0;
        in_stack_00000018._4_4_ = 0;
      }
      else {
LAB_05d0075c:
        unaff_w24 = 0;
        unaff_x23 = 1;
      }
    }
    else if (iVar4 == 3) {
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_KeyValuePair<Type,_XmlRootAttribute>_get_Key__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        uVar16 = extraout_x1_00;
      }
      unaff_w24 = 1;
      FUN_05d01fdc(unaff_x19 + 0x108,uVar16,1);
      unaff_x23 = 4;
    }
    else {
      if (iVar4 != 4) goto LAB_05d0075c;
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_KeyValuePair<Type,_XmlRootAttribute>_get_Key__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        uVar16 = extraout_x1;
      }
      unaff_w24 = 1;
      FUN_05d01fdc(unaff_x19 + 0x108,uVar16,1);
      unaff_x23 = 6;
    }
    unaff_w22 = iStack000000000000006c;
    in_stack_00000038._4_2_ = 0;
    in_stack_00000038._6_1_ = 0;
    in_stack_00000048 = 0;
    in_stack_00000040 = 0;
    in_stack_00000058 = 0;
    in_stack_00000050 = 0;
    if (DAT_066c1e96 == '\0') {
      FUN_02b3c81c(PTR_DAT_063132f8);
      DAT_066c1e96 = '\x01';
    }
    param_1 = &PTR_DAT_06313000;
    param_2 = &stack0x00000070;
    param_3 = 0;
  }
LAB_05d009c4:
  if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000001a8) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
LAB_05d00a48:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


