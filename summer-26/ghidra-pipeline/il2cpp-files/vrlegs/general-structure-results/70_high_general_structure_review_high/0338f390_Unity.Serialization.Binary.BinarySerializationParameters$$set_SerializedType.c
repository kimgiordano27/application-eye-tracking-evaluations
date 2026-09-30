/*
FUNCTION_NAME: Unity.Serialization.Binary.BinarySerializationParameters$$set_SerializedType
ENTRY_POINT: 0338f390
PROGRAM: vrlegs-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void Unity_Serialization_Binary_BinarySerializationParameters__set_SerializedType
               (undefined **param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined3 uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  int unaff_w19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long lVar11;
  undefined8 *unaff_x26;
  uint unaff_w27;
  undefined4 *unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  long *in_stack_00000030;
  undefined4 *in_stack_00000038;
  undefined8 *in_stack_00000040;
  undefined2 *in_stack_00000048;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  long *in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined1 in_stack_00000080;
  int in_stack_00000088;
  undefined4 uStack00000000000000a0;
  undefined3 uStack00000000000000a4;
  undefined8 in_stack_000000a8;
  undefined1 uStack00000000000000b0;
  int iStack00000000000000b4;
  undefined3 uStack00000000000000f8;
  undefined1 uStack00000000000000fb;
  undefined3 uStack00000000000000fc;
  undefined8 in_stack_00000100;
  long *in_stack_00000108;
  long *in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  long *in_stack_00000128;
  long *in_stack_00000130;
  undefined8 in_stack_00000140;
  long *in_stack_00000148;
  long *in_stack_00000150;
  undefined8 in_stack_00000160;
  long *in_stack_00000168;
  long *in_stack_00000170;
  undefined1 uStack0000000000000178;
  undefined1 uStack0000000000000179;
  undefined2 uStack000000000000017a;
  undefined4 uStack000000000000017c;
  undefined4 uStack0000000000000180;
  undefined4 uStack0000000000000184;
  long in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined4 uStack00000000000001d8;
  undefined2 uStack00000000000001dc;
  undefined1 uStack00000000000001de;
  undefined1 uStack00000000000001df;
  undefined8 in_stack_000001e0;
  undefined1 uStack00000000000001e8;
  long *in_stack_000001f0;
  undefined4 uVar12;
  long in_stack_00000228;
  
  do {
    FUN_01b7a454(&stack0x00000140,&stack0x000001c0,*(undefined8 *)param_1[0x1c9]);
    uVar8 = in_stack_000001c0;
    if (in_stack_00000168 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(in_stack_00000168 + 3) <= unaff_w27) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    lVar11 = in_stack_00000168[unaff_x21 + 4];
    if (*(int *)(*(long *)Unity_Properties_IDictionaryPropertyBagVisitor_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar5 = FUN_03389790(uVar8);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    in_stack_000001c8._4_4_ = uVar5;
    FUN_01b5f01c(lVar11,(long)&stack0x000001c8 + 4,*(undefined8 *)PTR_DAT_03cbe508);
    while (uVar7 = FUN_021b51c8(&stack0x00000140,*unaff_x26), (uVar7 & 1) == 0) {
      FUN_021b51c4(&stack0x00000140,
                   *(undefined8 *)Unity_Services_Economy_IEconomyPurchasesApiClientApi_TypeInfo);
      if ((*in_stack_00000030 == 0) || (lVar11 = *(long *)(*in_stack_00000030 + 0x58), lVar11 == 0))
      goto LAB_0338fa88;
      if (*(uint *)(lVar11 + 0x18) <= unaff_w27) goto LAB_0338fa98;
      lVar11 = *(long *)(lVar11 + unaff_x21 * 8 + 0x20);
      if (lVar11 == 0) {
LAB_0338fa88:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      Animancer_FadeGroup__get_TargetWeight
                (lVar11,&stack0x000001e0,
                 *(undefined8 *)
                  UnityEngine_Networking_PlayerConnection_IEditorPlayerConnection_TypeInfo);
      in_stack_00000148 = _uStack00000000000001e8;
      in_stack_00000140 = in_stack_000001e0;
      in_stack_00000150 = in_stack_000001f0;
      while (uVar7 = FUN_021b51c8(&stack0x00000140,*unaff_x26), (uVar7 & 1) != 0) {
        FUN_01b7a454(&stack0x00000140,&stack0x000001d0,
                     *(undefined8 *)UnityEngine_UIElements_IEditableElement_TypeInfo);
        uVar8 = in_stack_000001d0;
        if (in_stack_00000170 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(uint *)(in_stack_00000170 + 3) <= unaff_w27) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        lVar11 = in_stack_00000170[unaff_x21 + 4];
        if (*(int *)(*(long *)Unity_Properties_IDictionaryPropertyBagVisitor_TypeInfo + 0xe0) == 0)
        {
          thunk_FUN_01a58e78();
        }
        uVar5 = FUN_03389790(uVar8);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uStack00000000000001d8 = uVar5;
        FUN_01b5f01c(lVar11,&stack0x000001d8,*(undefined8 *)PTR_DAT_03cbe508);
      }
      FUN_021b51c4(&stack0x00000140,
                   *(undefined8 *)Unity_Services_Economy_IEconomyPurchasesApiClientApi_TypeInfo);
      lVar11 = in_stack_00000030[1];
      if (lVar11 == 0) goto LAB_0338fa88;
      if (*(uint *)(lVar11 + 0x18) <= unaff_w27) goto LAB_0338fa98;
      lVar11 = *(long *)(lVar11 + unaff_x21 * 8 + 0x20);
      if (lVar11 == 0) goto LAB_0338fa88;
      Animancer_FadeGroup__get_TargetWeight(lVar11,&stack0x000001e0,*(undefined8 *)PTR_DAT_03cc8678)
      ;
      in_stack_00000128 = _uStack00000000000001e8;
      in_stack_00000120 = in_stack_000001e0;
      in_stack_00000130 = in_stack_000001f0;
      while( true ) {
        uVar7 = FUN_021b51c8(&stack0x00000120,*unaff_x29);
        if ((uVar7 & 1) == 0) break;
        FUN_01b7a454(&stack0x00000120,(long)&stack0x000001d8 + 4,*(undefined8 *)PTR_DAT_03cc8660);
        uVar5 = _uStack00000000000001dc;
        if (in_stack_000001b8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar11 = *(long *)(in_stack_000001b8 + 0x18);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(uint *)(lVar11 + 0x18) <= unaff_w27) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        lVar11 = *(long *)(lVar11 + unaff_x21 * 8 + 0x20);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_02215a88(lVar11,_uStack00000000000001dc,&stack0x000001e0,
                     *(undefined8 *)System_Xml_IHasXmlNode_TypeInfo);
        in_stack_00000118._4_2_ = *(undefined2 *)unaff_x28;
        in_stack_00000118._6_1_ = *(undefined1 *)((long)unaff_x28 + 2);
        uVar3 = *(undefined3 *)unaff_x28;
        in_stack_00000108 = (long *)unaff_x20[1];
        in_stack_00000100 = *unaff_x20;
        plVar10 = (long *)unaff_x20[2];
        in_stack_00000110 = plVar10;
        if (((ulong)_uStack00000000000001e8 & 1) == 0) {
          if (in_stack_000001b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar11 = *(long *)(in_stack_000001b8 + 0x18);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(uint *)(lVar11 + 0x18) <= unaff_w27) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          lVar11 = *(long *)(lVar11 + unaff_x21 * 8 + 0x20);
          _uStack00000000000001dc = CONCAT13(uStack00000000000001df,uVar3);
          uVar1 = _uStack00000000000001dc;
          _uStack00000000000001e8 = in_stack_00000108;
          if (lVar11 == 0) {
            in_stack_000001e0 = in_stack_00000100;
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          in_stack_000000a8 = in_stack_000001e0;
          uStack00000000000000b0 = uStack00000000000001e8;
          uStack00000000000001dc = (undefined2)uVar3;
          uStack00000000000001de = (undefined1)((uint3)uVar3 >> 0x10);
          uVar8 = *(undefined8 *)System_Collections_IHashCodeProvider_TypeInfo;
          *in_stack_00000048 = uStack00000000000001dc;
          *(undefined1 *)(in_stack_00000048 + 1) = uStack00000000000001de;
          in_stack_00000040[2] = plVar10;
          in_stack_00000040[1] = in_stack_00000108;
          *in_stack_00000040 = in_stack_00000100;
          iStack00000000000000b4 = unaff_w19;
          _uStack00000000000001dc = uVar1;
          in_stack_000001e0 = in_stack_00000100;
          FUN_02215b6c(lVar11,uVar5,&stack0x000000a8,uVar8);
          in_stack_000001f0 = plVar10;
        }
      }
      FUN_021b51c4(&stack0x00000120,*(undefined8 *)PTR_DAT_03cc8648);
      lVar11 = in_stack_00000030[2];
      if (lVar11 == 0) goto LAB_0338fa88;
      if (*(uint *)(lVar11 + 0x18) <= unaff_w27) goto LAB_0338fa98;
      lVar11 = *(long *)(lVar11 + unaff_x21 * 8 + 0x20);
      if (lVar11 == 0) goto LAB_0338fa88;
      Animancer_FadeGroup__get_TargetWeight(lVar11,&stack0x000001e0,*(undefined8 *)PTR_DAT_03cc8678)
      ;
      in_stack_00000128 = _uStack00000000000001e8;
      in_stack_00000120 = in_stack_000001e0;
      in_stack_00000130 = in_stack_000001f0;
      while (uVar7 = FUN_021b51c8(&stack0x00000120,*unaff_x29), (uVar7 & 1) != 0) {
        FUN_01b7a454(&stack0x00000120,&stack0x000000a0,*(undefined8 *)PTR_DAT_03cc8660);
        uVar5 = uStack00000000000000a0;
        if (in_stack_000001b8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar11 = *(long *)(in_stack_000001b8 + 0x18);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(uint *)(lVar11 + 0x18) <= unaff_w27) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        lVar11 = *(long *)(lVar11 + unaff_x21 * 8 + 0x20);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_02215a88(lVar11,uStack00000000000000a0,&stack0x000001e0,
                     *(undefined8 *)System_Xml_IHasXmlNode_TypeInfo);
        uVar2 = *(undefined4 *)((long)unaff_x28 + 3);
        plVar10 = (long *)unaff_x22[1];
        uVar8 = *unaff_x22;
        uVar1 = *(undefined4 *)(unaff_x22 + 2);
        uStack00000000000000f8 = (undefined3)*unaff_x28;
        uStack00000000000000fb = (undefined1)uVar2;
        uStack00000000000000fc = (undefined3)((uint)uVar2 >> 8);
        if (((ulong)_uStack00000000000001e8 & 1) == 0) {
          if (in_stack_000001b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar11 = *(long *)(in_stack_000001b8 + 0x18);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(uint *)(lVar11 + 0x18) <= unaff_w27) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          lVar11 = *(long *)(lVar11 + unaff_x21 * 8 + 0x20);
          uStack00000000000000a0 = CONCAT13(uStack00000000000000fb,uStack00000000000000f8);
          uStack00000000000000a4 = uStack00000000000000fc;
          uVar12 = (undefined4)((ulong)in_stack_000001f0 >> 0x20);
          in_stack_000001f0 = (long *)CONCAT44(uVar12,uVar1);
          _uStack00000000000001e8 = plVar10;
          if (lVar11 == 0) {
            in_stack_000001e0 = uVar8;
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          in_stack_00000078 = in_stack_000001e0;
          in_stack_00000080 = uStack00000000000001e8;
          uVar9 = *(undefined8 *)System_Collections_IHashCodeProvider_TypeInfo;
          *(undefined4 *)((long)in_stack_00000038 + 3) = uVar2;
          *in_stack_00000038 = uStack00000000000000a0;
          *(undefined4 *)(unaff_x23 + 2) = uVar1;
          unaff_x23[1] = plVar10;
          *unaff_x23 = uVar8;
          in_stack_00000088 = unaff_w19;
          in_stack_000001e0 = uVar8;
          FUN_02215b6c(lVar11,uVar5,&stack0x00000078,uVar9);
        }
      }
      FUN_021b51c4(&stack0x00000120,*(undefined8 *)PTR_DAT_03cc8648);
      plVar10 = in_stack_00000170;
      unaff_w27 = unaff_w27 + 1;
      if (unaff_w27 == 2) {
        if (in_stack_000001b8 == 0) goto LAB_0338fa88;
        _uStack00000000000001e8 = in_stack_00000168;
        in_stack_000001e0 = in_stack_00000160;
        if (*(long *)(in_stack_000001b8 + 0x10) == 0) goto LAB_0338fa88;
        in_stack_00000058 = in_stack_00000168;
        in_stack_00000050 = in_stack_00000160;
        in_stack_00000060 = in_stack_00000170;
        in_stack_00000068 =
             CONCAT44(uStack000000000000017c,
                      CONCAT22(uStack000000000000017a,
                               CONCAT11(uStack0000000000000179,uStack0000000000000178)));
        in_stack_00000070 = CONCAT44(uStack0000000000000184,uStack0000000000000180);
        FUN_01b5f01c(*(long *)(in_stack_000001b8 + 0x10),&stack0x00000050,
                     *(undefined8 *)Animancer_IHasKey_TypeInfo);
        unaff_w19 = unaff_w19 + 1;
        lVar11 = *(long *)(in_stack_00000028 + 0x80);
        if (lVar11 == 0) goto LAB_0338fa88;
        if (*(int *)(lVar11 + 0x18) <= unaff_w19) {
          if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000228) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        in_stack_00000030 =
             (long *)FUN_021a228c(lVar11,unaff_w19,
                                  *(undefined8 *)System_Xml_IDtdAttributeInfo_TypeInfo);
        in_stack_00000168 = (long *)0x0;
        in_stack_00000160 = 0;
        uStack0000000000000178 = 0;
        uStack0000000000000179 = 0;
        uStack000000000000017a = 0;
        uStack000000000000017c = 0;
        in_stack_00000170 = (long *)0x0;
        uStack0000000000000180 = 0;
        uStack0000000000000184 = 0;
        if (*in_stack_00000030 == 0) goto LAB_0338fa88;
        in_stack_00000160 = *(undefined8 *)(*in_stack_00000030 + 0x10);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000160);
        puVar4 = PTR_DAT_03ceced8;
        uStack0000000000000178 = *(undefined1 *)((long)in_stack_00000030 + 0x1c);
        uStack0000000000000179 = (undefined1)in_stack_00000030[8];
        if (*in_stack_00000030 == 0) goto LAB_0338fa88;
        uStack0000000000000184 =
             CONCAT31(uStack0000000000000184._1_3_,*(undefined1 *)(*in_stack_00000030 + 0x48));
        in_stack_00000168 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03ceced8,2);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  (in_stack_00000020,in_stack_00000168);
        in_stack_00000170 = (long *)FUN_01ab6a94(*(undefined8 *)puVar4,2);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  (in_stack_00000018,in_stack_00000170);
        unaff_w27 = 0;
        uStack000000000000017c = (undefined4)in_stack_00000030[4];
        uStack0000000000000180 = (undefined4)((ulong)in_stack_00000030[4] >> 0x20);
        in_stack_000001f0 = plVar10;
      }
      plVar10 = in_stack_00000168;
      lVar11 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe518);
      Animancer_AnimancerState__OnSetIsPlaying(lVar11,*(undefined8 *)PTR_DAT_03cbe510);
      if (plVar10 == (long *)0x0) goto LAB_0338fa88;
      if ((lVar11 != 0) &&
         (lVar6 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar6 == 0)) {
LAB_0338fa9c:
        uVar8 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar8,0);
      }
      if (*(uint *)(plVar10 + 3) <= unaff_w27) goto LAB_0338fa98;
      unaff_x21 = (long)(int)unaff_w27;
      plVar10[unaff_x21 + 4] = lVar11;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                (plVar10 + unaff_x21 + 4,lVar11);
      plVar10 = in_stack_00000170;
      lVar11 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe518);
      Animancer_AnimancerState__OnSetIsPlaying(lVar11,*(undefined8 *)PTR_DAT_03cbe510);
      if (plVar10 == (long *)0x0) goto LAB_0338fa88;
      if ((lVar11 != 0) &&
         (lVar6 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar6 == 0))
      goto LAB_0338fa9c;
      if (*(uint *)(plVar10 + 3) <= unaff_w27) {
LAB_0338fa98:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      plVar10[unaff_x21 + 4] = lVar11;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                (plVar10 + unaff_x21 + 4,lVar11);
      if ((*in_stack_00000030 == 0) || (lVar11 = *(long *)(*in_stack_00000030 + 0x50), lVar11 == 0))
      goto LAB_0338fa88;
      if (*(uint *)(lVar11 + 0x18) <= unaff_w27) goto LAB_0338fa98;
      lVar11 = *(long *)(lVar11 + unaff_x21 * 8 + 0x20);
      if (lVar11 == 0) goto LAB_0338fa88;
      Animancer_FadeGroup__get_TargetWeight
                (lVar11,&stack0x000001e0,
                 *(undefined8 *)
                  UnityEngine_Networking_PlayerConnection_IEditorPlayerConnection_TypeInfo);
      in_stack_00000148 = _uStack00000000000001e8;
      in_stack_00000140 = in_stack_000001e0;
      in_stack_00000150 = in_stack_000001f0;
    }
    param_1 = &HurricaneVR_Framework_Core_Player_GrabbableCollisionTracker_TypeInfo;
  } while( true );
}


