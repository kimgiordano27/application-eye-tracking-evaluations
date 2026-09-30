/*
FUNCTION_NAME: System.RuntimeType$$CreateInstanceInternal
ENTRY_POINT: 034aa888
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x034aad40) */

undefined8 System_RuntimeType__CreateInstanceInternal(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  uint uVar11;
  int *piVar12;
  long unaff_x21;
  uint unaff_w22;
  undefined8 *unaff_x23;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  puVar1 = Method_UnityEngine_GameObject_GetComponent<OVRLipSyncContextTextureFlip>__;
  if (*(int *)(*(long *)Method_UnityEngine_GameObject_GetComponent<OVRLipSyncContextTextureFlip>__ +
              0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (DAT_048321c0 == '\0') {
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<OVRLipSyncContextTextureFlip>__);
    DAT_048321c0 = '\x01';
  }
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar5 = *(long *)puVar1;
  }
  uVar13 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x18);
  uVar6 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_Globalization_TextInfo_ToTitleCase__);
  FUN_02b70a5c(uVar6,uVar13,*(undefined8 *)Method_System_Globalization_TextInfo_ToLower__);
  *unaff_x23 = uVar6;
  thunk_FUN_01f51358();
  if (*(long *)(unaff_x21 + 0x30) == 0) {
    plVar8 = *(long **)(unaff_x21 + 0x10);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *plVar8;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_UnityEngine_TextCore_Text_TextInfo_Resize<WordInfo>__) {
          puVar9 = (undefined8 *)(lVar5 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_034aaa04;
        }
        uVar7 = uVar7 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_01ecb238(plVar8,*(long *)
                                  Method_UnityEngine_TextCore_Text_TextInfo_Resize<WordInfo>__,1);
LAB_034aaa04:
    plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
    puVar4 = Method_UnityEngine_TextCore_Text_TextInfo_Resize<TextElementInfo>__;
    puVar3 = Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__;
    puVar2 = Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar5 = *plVar8;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
            puVar9 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_034aaa88;
          }
          uVar7 = uVar7 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar1,0);
LAB_034aaa88:
      uVar7 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if ((uVar7 & 1) == 0) {
        if ((unaff_w22 & 1) != 0) goto LAB_034aabc8;
        plVar8 = *(long **)(unaff_x21 + 0x10);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar5 = *plVar8;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 == 0) goto LAB_034aaba0;
        piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_034aab88;
      }
      lVar5 = *plVar8;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
            puVar9 = (undefined8 *)(lVar5 + (long)(*piVar12 + 2) * 0x10 + 0x138);
            goto LAB_034aaae8;
          }
          uVar7 = uVar7 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar3,2);
LAB_034aaae8:
      auVar14 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      plVar10 = auVar14._0_8_;
      if ((plVar10 != (long *)0x0) && (*plVar10 != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar10,*(long *)puVar2);
      }
      uStack0000000000000038 = 0xffffffff;
      in_stack_00000030 = auVar14._8_8_;
      thunk_FUN_01f51358(&stack0x00000030);
      if (*(long *)(unaff_x21 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_02b712b8(*(long *)(unaff_x21 + 0x28),plVar10,in_stack_00000030,
                   CONCAT44(uStack000000000000003c,uStack0000000000000038),*(undefined8 *)puVar4);
      if ((unaff_w22 & 1) != 0) {
        if (*(long *)(unaff_x21 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_02b712b8(*(long *)(unaff_x21 + 0x38),plVar10,in_stack_00000030,
                     CONCAT44(uStack000000000000003c,uStack0000000000000038),*(undefined8 *)puVar4);
      }
    } while( true );
  }
  lVar5 = FUN_034ab6d4();
  puVar2 = Method_UnityEngine_TextCore_Text_TextInfo_Resize<TextElementInfo>__;
  puVar1 = Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  while (uVar7 = FUN_034ab7fc(lVar5), (uVar7 & 1) != 0) {
    plVar8 = (long *)FUN_034ab74c(lVar5);
    if ((plVar8 != (long *)0x0) && (*plVar8 != *(long *)puVar1)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar8);
    }
    uStack0000000000000028 = *(undefined4 *)(lVar5 + 0x20);
    in_stack_00000020 = 0;
    thunk_FUN_01f51358(&stack0x00000020,0);
    if (*(long *)(unaff_x21 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_02b712b8(*(long *)(unaff_x21 + 0x38),plVar8,in_stack_00000020,
                 CONCAT44(uStack000000000000002c,uStack0000000000000028),*(undefined8 *)puVar2);
  }
  goto LAB_034aabc8;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar12 = piVar12 + 4;
    if (uVar7 == 0) break;
LAB_034aab88:
    if (*(long *)(piVar12 + -2) ==
        *(long *)Method_UnityEngine_TextCore_Text_TextInfo_Resize<WordInfo>__) {
      puVar9 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_034aabbc;
    }
  }
LAB_034aaba0:
  puVar9 = (undefined8 *)
           FUN_01ecb238(plVar8,*(long *)Method_UnityEngine_TextCore_Text_TextInfo_Resize<WordInfo>__
                        ,0);
LAB_034aabbc:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_034aabc8:
  *(undefined1 *)(unaff_x21 + 0x40) = 1;
  if (*(long *)(unaff_x21 + 0x30) != 0) {
    if (*(long *)(unaff_x21 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar7 = FUN_02b72aa0();
    if ((uVar7 & 1) != 0) {
      uVar6 = FUN_034ab86c();
      uVar11 = 0;
      goto LAB_034aac20;
    }
  }
  uVar6 = 0;
  uVar11 = 1;
LAB_034aac20:
  if ((unaff_w22 & uVar11) != 0) {
    if (*(long *)(unaff_x21 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar7 = FUN_02b72aa0();
    if ((uVar7 & 1) != 0) {
      uVar6 = FUN_034ab86c();
    }
  }
  if (in_stack_00000048._4_1_ != '\0') {
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit();
  }
  return uVar6;
}


