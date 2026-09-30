/*
FUNCTION_NAME: Unity.Burst.BurstCompiler.BurstCompilerHelper.IsBurstEnabledDelegate$$.ctor
ENTRY_POINT: 039bcc08
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_8;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x039bd5d0) */
/* WARNING: Removing unreachable block (ram,0x039bd38c) */

void Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabledDelegate___ctor
               (long param_1,long *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  undefined1 auVar23 [16];
  long lStack0000000000000028;
  
  if ((DAT_04838839 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_5031);
    thunk_FUN_01efb3a4(StringLiteral_5382);
    thunk_FUN_01efb3a4(StringLiteral_5383);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_CommandBuffer_DrawMesh__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_4657);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_5384);
    thunk_FUN_01efb3a4(StringLiteral_5385);
    thunk_FUN_01efb3a4(StringLiteral_5386);
    thunk_FUN_01efb3a4(StringLiteral_5387);
    thunk_FUN_01efb3a4(StringLiteral_4658);
    thunk_FUN_01efb3a4(StringLiteral_4653);
    thunk_FUN_01efb3a4(StringLiteral_5388);
    thunk_FUN_01efb3a4(StringLiteral_5389);
    thunk_FUN_01efb3a4(StringLiteral_5390);
    thunk_FUN_01efb3a4(StringLiteral_4654);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<Point>__);
    DAT_04838839 = 1;
  }
  if (param_2 == (long *)0x0) goto LAB_039bd570;
  if (*param_2 != *(long *)StringLiteral_4654) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc(param_2);
  }
  if (param_2[6] != 0) {
    FUN_039bd748(param_1,param_2);
    return;
  }
  plVar22 = (long *)(param_1 + 0x10);
  if (*plVar22 == 0) goto LAB_039bd570;
  lVar9 = FUN_039af820();
  if (*plVar22 == 0) goto LAB_039bd570;
  lVar10 = FUN_039af820(*plVar22);
  if (*plVar22 == 0) goto LAB_039bd570;
  uVar2 = System_ComponentModel_ArrayConverter___ctor(*plVar22);
  lVar18 = *plVar22;
  if (lVar18 == 0) goto LAB_039bd570;
  if (param_2[5] == 0) {
    uVar12 = FUN_039a0784(0);
    FUN_039aab5c(lVar18,uVar12);
    lStack0000000000000028 = 0;
  }
  else {
    lStack0000000000000028 = FUN_039af820(lVar18);
    if (*plVar22 == 0) goto LAB_039bd570;
    FUN_039aff6c(*plVar22);
  }
  if (*plVar22 == 0) goto LAB_039bd570;
  plVar11 = (long *)FUN_039aae1c(*plVar22,uVar2);
  if (plVar11 == (long *)0x0) {
    plVar11 = (long *)0x0;
  }
  else if (*plVar11 != *(long *)StringLiteral_5031) {
    plVar11 = (long *)0x0;
  }
  FUN_039bae78(param_1,4);
  uVar12 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
  uVar19 = *(undefined8 *)Method_UnityEngine_Component_GetComponent<Point>__;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
  }
  uVar19 = FUN_03579868(uVar19,0);
  uVar3 = FUN_03583338(uVar12,uVar19,0);
  if ((uVar3 & 1) == 0) {
    FUN_039b65ec(param_1,param_2[3]);
  }
  else {
    FUN_039b554c(param_1);
  }
  if (*plVar22 == 0) goto LAB_039bd570;
  uVar4 = System_ComponentModel_ArrayConverter___ctor();
  if ((*plVar22 == 0) || (lVar10 == 0)) goto LAB_039bd570;
  FUN_0399e034(lVar10,*plVar22,0);
  if (*plVar22 == 0) goto LAB_039bd570;
  uVar1 = uVar3 & 1;
  FUN_039afad4(*plVar22,lVar9,uVar1,uVar1,uVar1);
  if (param_2[4] == 0) goto LAB_039bd570;
  iVar5 = FUN_0265d6c4(param_2[4],*(undefined8 *)StringLiteral_4653);
  if (0 < iVar5) {
    lVar18 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_5387);
    FUN_030f2380(lVar18,*(undefined8 *)StringLiteral_5386);
    if (param_2[4] != 0) {
      plVar13 = (long *)FUN_0265d924(param_2[4],*(undefined8 *)StringLiteral_4658);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar15 = *plVar13;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__)
            {
              puVar14 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_039bcfb4;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar14 = (undefined8 *)
                  FUN_01ecb238(plVar13,*(long *)
                                        Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                               ,0);
LAB_039bcfb4:
        uVar16 = (*(code *)*puVar14)(plVar13,puVar14[1]);
        if ((uVar16 & 1) == 0) {
          if (plVar13 == (long *)0x0) goto LAB_039bd380;
          lVar15 = *plVar13;
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar16 == 0) goto LAB_039bd33c;
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          goto LAB_039bd324;
        }
        lVar15 = *plVar13;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)StringLiteral_4657) {
              puVar14 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_039bd01c;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar14 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)StringLiteral_4657,0);
LAB_039bd01c:
        lVar15 = (*(code *)*puVar14)(plVar13,puVar14[1]);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar21 = *(long *)(lVar15 + 0x10);
        if (lVar21 == 0) {
          uVar12 = *(undefined8 *)(lVar15 + 0x18);
          if (*(int *)(*(long *)Method_UnityEngine_Rendering_CommandBuffer_DrawMesh__ + 0xe0) == 0)
          {
            thunk_FUN_01ee6d7c();
          }
          lVar21 = FUN_03986848(uVar12,0);
        }
        if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar20 = *(long *)(param_1 + 0x18);
        uVar6 = System_ComponentModel_ArrayConverter___ctor();
        if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        auVar23 = FUN_039c8460(lVar20,lVar21,uVar6,0);
        if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_02741ef0(*(long *)(param_1 + 0x38),lVar21,*(undefined8 *)StringLiteral_5389);
        if (*(long *)(lVar15 + 0x28) == 0) {
          lVar20 = 0;
        }
        else {
          FUN_039bae78(param_1,7);
          if (*plVar22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_039b0200();
          if (*plVar22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar6 = FUN_039afa78();
          if (*plVar22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar7 = System_ComponentModel_ArrayConverter___ctor();
          FUN_039b5e34(param_1,lVar21,1);
          FUN_039b554c(param_1,*(undefined8 *)(lVar15 + 0x28));
          FUN_039b5c40(param_1,lVar21);
          if (*plVar22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar8 = System_ComponentModel_ArrayConverter___ctor();
          lVar20 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_5382);
          FUN_035ac8e8(lVar20,0);
          *(undefined4 *)(lVar20 + 0x10) = uVar6;
          *(undefined4 *)(lVar20 + 0x14) = uVar7;
          *(undefined4 *)(lVar20 + 0x18) = uVar8;
          if (*plVar22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_039b0260();
          FUN_039baf84(param_1);
        }
        FUN_039bae78(param_1,5);
        if ((uVar3 & 1) == 0) {
          if (*plVar22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_039b0320();
        }
        else {
          if (*plVar22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_039b02c0();
        }
        if (*plVar22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar6 = FUN_039afa78();
        if (*plVar22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar7 = System_ComponentModel_ArrayConverter___ctor();
        FUN_039b5e34(param_1,lVar21,1);
        if ((uVar3 & 1) == 0) {
          FUN_039b65ec(param_1,*(undefined8 *)(lVar15 + 0x20));
        }
        else {
          FUN_039b554c(param_1);
        }
        if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_02741e90(*(long *)(param_1 + 0x38),*(undefined8 *)StringLiteral_5388);
        if (*plVar22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_039b0380(*plVar22,uVar3 & 1,lVar10);
        if (*plVar22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar8 = System_ComponentModel_ArrayConverter___ctor();
        uVar19 = *(undefined8 *)(lVar15 + 0x18);
        uVar12 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_5383);
        FUN_039b4700(uVar12,uVar6,uVar7,uVar8,uVar19,lVar20);
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar15 = *(long *)(lVar18 + 0x10);
        lVar21 = *(long *)StringLiteral_5384;
        *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(lVar18 + 0x18);
        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(lVar18 + 0x18) = uVar1 + 1;
          puVar14 = (undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
          *puVar14 = uVar12;
          thunk_FUN_01f51358(puVar14,uVar12);
        }
        else {
          FUN_030f2bb4(lVar18,uVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
        }
        FUN_039baf84(param_1);
        if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar15 = *(long *)(param_1 + 0x18);
        uVar6 = System_ComponentModel_ArrayConverter___ctor();
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_039c2c88(lVar15,auVar23._0_8_,auVar23._8_8_,uVar6,0);
      } while( true );
    }
    goto LAB_039bd570;
  }
  if (param_2[5] == 0) goto LAB_039bd570;
  lVar18 = 0;
LAB_039bd39c:
  FUN_039bae78(param_1,6);
  if ((*(long *)(param_1 + 0x10) == 0) || (lStack0000000000000028 == 0)) goto LAB_039bd570;
  FUN_0399e034(lStack0000000000000028,*(long *)(param_1 + 0x10),0);
  if (*plVar22 == 0) goto LAB_039bd570;
  FUN_039b0038(*plVar22,lStack0000000000000028);
  FUN_039b65ec(param_1,param_2[5]);
  if ((*(long *)(param_1 + 0x10) == 0) || (FUN_039b00bc(), *plVar22 == 0)) goto LAB_039bd570;
  uVar6 = *(undefined4 *)(lStack0000000000000028 + 0x10);
  uVar7 = *(undefined4 *)(lVar10 + 0x10);
  uVar8 = System_ComponentModel_ArrayConverter___ctor();
  if (lVar18 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = FUN_030f4630(lVar18,*(undefined8 *)StringLiteral_5385);
  }
  lVar10 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_5390);
  FUN_035ac8e8(lVar10,0);
  *(undefined4 *)(lVar10 + 0x18) = uVar6;
  *(undefined4 *)(lVar10 + 0x1c) = uVar8;
  *(undefined4 *)(lVar10 + 0x20) = uVar7;
  *(undefined4 *)(lVar10 + 0x10) = uVar2;
  *(undefined4 *)(lVar10 + 0x14) = uVar4;
  *(undefined8 *)(lVar10 + 0x28) = uVar12;
  thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x28),uVar12);
  if (plVar11 == (long *)0x0) goto LAB_039bd570;
  plVar11[3] = lVar10;
  thunk_FUN_01f51358(plVar11 + 3,lVar10);
  FUN_039baf84(param_1);
  goto LAB_039bd48c;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_039bd324:
    if (*(long *)(piVar17 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar14 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_039bd374;
    }
  }
LAB_039bd33c:
  puVar14 = (undefined8 *)
            FUN_01ecb238(plVar13,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_039bd374:
  (*(code *)*puVar14)(plVar13,puVar14[1]);
LAB_039bd380:
  if (param_2[5] != 0) goto LAB_039bd39c;
  if (lVar18 == 0) goto LAB_039bd570;
  uVar6 = *(undefined4 *)(lVar10 + 0x10);
  uVar12 = FUN_030f4630(lVar18,*(undefined8 *)StringLiteral_5385);
  lVar10 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_5390);
  FUN_035ac8e8(lVar10,0);
  *(undefined4 *)(lVar10 + 0x20) = uVar6;
  *(undefined4 *)(lVar10 + 0x10) = uVar2;
  *(undefined4 *)(lVar10 + 0x14) = uVar4;
  *(undefined8 *)(lVar10 + 0x18) = 0x7fffffff7fffffff;
  *(undefined8 *)(lVar10 + 0x28) = uVar12;
  thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x28),uVar12);
  if (plVar11 == (long *)0x0) goto LAB_039bd570;
  plVar11[3] = lVar10;
  thunk_FUN_01f51358(plVar11 + 3,lVar10);
LAB_039bd48c:
  if ((*plVar22 != 0) && (lVar9 != 0)) {
    FUN_0399e034(lVar9,*plVar22,0);
    FUN_039baf84(param_1);
    return;
  }
LAB_039bd570:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


