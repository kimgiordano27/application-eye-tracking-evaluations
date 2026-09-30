/*
FUNCTION_NAME: Unity.Burst.BurstCompiler.<>c$$<Compile>b__22_0
ENTRY_POINT: 039bcd78
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x039bd5d0) */
/* WARNING: Removing unreachable block (ram,0x039bd38c) */
/* WARNING: Removing unreachable block (ram,0x039bd4c8) */

void Unity_Burst_BurstCompiler_<>c__<Compile>b__22_0(void)

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
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long unaff_x19;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long unaff_x22;
  long *unaff_x23;
  long lVar20;
  long *unaff_x29;
  undefined1 auVar21 [16];
  long lStack0000000000000028;
  
  lVar9 = FUN_039af820();
  if (*unaff_x29 == 0) goto LAB_039bd570;
  uVar2 = System_ComponentModel_ArrayConverter___ctor(*unaff_x29);
  lVar17 = *unaff_x29;
  if (lVar17 == 0) goto LAB_039bd570;
  if (unaff_x23[5] == 0) {
    uVar11 = FUN_039a0784(0);
    FUN_039aab5c(lVar17,uVar11);
    lStack0000000000000028 = 0;
  }
  else {
    lStack0000000000000028 = FUN_039af820(lVar17);
    if (*unaff_x29 == 0) goto LAB_039bd570;
    FUN_039aff6c(*unaff_x29);
  }
  if (*unaff_x29 == 0) goto LAB_039bd570;
  plVar10 = (long *)FUN_039aae1c(*unaff_x29,uVar2);
  if (plVar10 == (long *)0x0) {
    plVar10 = (long *)0x0;
  }
  else if (*plVar10 != *(long *)StringLiteral_5031) {
    plVar10 = (long *)0x0;
  }
  FUN_039bae78();
  uVar11 = (**(code **)(*unaff_x23 + 0x188))();
  uVar18 = *(undefined8 *)Method_UnityEngine_Component_GetComponent<Point>__;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
  }
  uVar18 = FUN_03579868(uVar18,0);
  uVar3 = FUN_03583338(uVar11,uVar18,0);
  if ((uVar3 & 1) == 0) {
    FUN_039b65ec();
  }
  else {
    FUN_039b554c();
  }
  if (*unaff_x29 == 0) goto LAB_039bd570;
  uVar4 = System_ComponentModel_ArrayConverter___ctor();
  if (((*unaff_x29 == 0) || (lVar9 == 0)) || (FUN_0399e034(lVar9,*unaff_x29,0), *unaff_x29 == 0))
  goto LAB_039bd570;
  FUN_039afad4();
  if (unaff_x23[4] == 0) goto LAB_039bd570;
  iVar5 = FUN_0265d6c4(unaff_x23[4],*(undefined8 *)StringLiteral_4653);
  if (0 < iVar5) {
    lVar17 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_5387);
    FUN_030f2380(lVar17,*(undefined8 *)StringLiteral_5386);
    if (unaff_x23[4] != 0) {
      plVar12 = (long *)FUN_0265d924(unaff_x23[4],*(undefined8 *)StringLiteral_4658);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar14 = *plVar12;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__)
            {
              puVar13 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_039bcfb4;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar13 = (undefined8 *)
                  FUN_01ecb238(plVar12,*(long *)
                                        Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                               ,0);
LAB_039bcfb4:
        uVar15 = (*(code *)*puVar13)(plVar12,puVar13[1]);
        if ((uVar15 & 1) == 0) {
          if (plVar12 == (long *)0x0) goto LAB_039bd380;
          lVar14 = *plVar12;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar15 == 0) goto LAB_039bd33c;
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          goto LAB_039bd324;
        }
        lVar14 = *plVar12;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)StringLiteral_4657) {
              puVar13 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_039bd01c;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar13 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)StringLiteral_4657,0);
LAB_039bd01c:
        lVar14 = (*(code *)*puVar13)(plVar12,puVar13[1]);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar20 = *(long *)(lVar14 + 0x10);
        if (lVar20 == 0) {
          uVar11 = *(undefined8 *)(lVar14 + 0x18);
          if (*(int *)(*(long *)Method_UnityEngine_Rendering_CommandBuffer_DrawMesh__ + 0xe0) == 0)
          {
            thunk_FUN_01ee6d7c();
          }
          lVar20 = FUN_03986848(uVar11,0);
        }
        if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar19 = *(long *)(unaff_x19 + 0x18);
        uVar6 = System_ComponentModel_ArrayConverter___ctor();
        if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        auVar21 = FUN_039c8460(lVar19,lVar20,uVar6,0);
        if (*(long *)(unaff_x19 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_02741ef0(*(long *)(unaff_x19 + 0x38),lVar20,*(undefined8 *)StringLiteral_5389);
        if (*(long *)(lVar14 + 0x28) == 0) {
          lVar20 = 0;
        }
        else {
          FUN_039bae78();
          if (*unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_039b0200();
          if (*unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar6 = FUN_039afa78();
          if (*unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar7 = System_ComponentModel_ArrayConverter___ctor();
          FUN_039b5e34();
          FUN_039b554c();
          FUN_039b5c40();
          if (*unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar8 = System_ComponentModel_ArrayConverter___ctor();
          lVar20 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_5382);
          FUN_035ac8e8(lVar20,0);
          *(undefined4 *)(lVar20 + 0x10) = uVar6;
          *(undefined4 *)(lVar20 + 0x14) = uVar7;
          *(undefined4 *)(lVar20 + 0x18) = uVar8;
          if (*unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_039b0260();
          FUN_039baf84();
        }
        FUN_039bae78();
        if ((uVar3 & 1) == 0) {
          if (*unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_039b0320();
        }
        else {
          if (*unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_039b02c0();
        }
        if (*unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar6 = FUN_039afa78();
        if (*unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar7 = System_ComponentModel_ArrayConverter___ctor();
        FUN_039b5e34();
        if ((uVar3 & 1) == 0) {
          FUN_039b65ec();
        }
        else {
          FUN_039b554c();
        }
        if (*(long *)(unaff_x19 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_02741e90(*(long *)(unaff_x19 + 0x38),*(undefined8 *)StringLiteral_5388);
        if (*unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_039b0380(*unaff_x29,uVar3 & 1,lVar9);
        if (*unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar8 = System_ComponentModel_ArrayConverter___ctor();
        uVar18 = *(undefined8 *)(lVar14 + 0x18);
        uVar11 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_5383);
        FUN_039b4700(uVar11,uVar6,uVar7,uVar8,uVar18,lVar20);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar14 = *(long *)(lVar17 + 0x10);
        lVar20 = *(long *)StringLiteral_5384;
        *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(lVar17 + 0x18);
        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar17 + 0x18) = uVar1 + 1;
          puVar13 = (undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
          *puVar13 = uVar11;
          thunk_FUN_01f51358(puVar13,uVar11);
        }
        else {
          FUN_030f2bb4(lVar17,uVar11,
                       *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
        }
        FUN_039baf84();
        if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar14 = *(long *)(unaff_x19 + 0x18);
        uVar6 = System_ComponentModel_ArrayConverter___ctor();
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_039c2c88(lVar14,auVar21._0_8_,auVar21._8_8_,uVar6,0);
      } while( true );
    }
    goto LAB_039bd570;
  }
  if (unaff_x23[5] == 0) goto LAB_039bd570;
  lVar17 = 0;
LAB_039bd39c:
  FUN_039bae78();
  if ((*(long *)(unaff_x19 + 0x10) == 0) || (lStack0000000000000028 == 0)) goto LAB_039bd570;
  FUN_0399e034(lStack0000000000000028,*(long *)(unaff_x19 + 0x10),0);
  if (*unaff_x29 == 0) goto LAB_039bd570;
  FUN_039b0038(*unaff_x29,lStack0000000000000028);
  FUN_039b65ec();
  if ((*(long *)(unaff_x19 + 0x10) == 0) || (FUN_039b00bc(), *unaff_x29 == 0)) goto LAB_039bd570;
  uVar6 = *(undefined4 *)(lStack0000000000000028 + 0x10);
  uVar7 = *(undefined4 *)(lVar9 + 0x10);
  uVar8 = System_ComponentModel_ArrayConverter___ctor();
  if (lVar17 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = FUN_030f4630(lVar17,*(undefined8 *)StringLiteral_5385);
  }
  lVar9 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_5390);
  FUN_035ac8e8(lVar9,0);
  *(undefined4 *)(lVar9 + 0x18) = uVar6;
  *(undefined4 *)(lVar9 + 0x1c) = uVar8;
  *(undefined4 *)(lVar9 + 0x20) = uVar7;
  *(undefined4 *)(lVar9 + 0x10) = uVar2;
  *(undefined4 *)(lVar9 + 0x14) = uVar4;
  *(undefined8 *)(lVar9 + 0x28) = uVar11;
  thunk_FUN_01f51358((undefined8 *)(lVar9 + 0x28),uVar11);
  if (plVar10 == (long *)0x0) goto LAB_039bd570;
  plVar10[3] = lVar9;
  thunk_FUN_01f51358(plVar10 + 3,lVar9);
  FUN_039baf84();
  goto LAB_039bd48c;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_039bd324:
    if (*(long *)(piVar16 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar13 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_039bd374;
    }
  }
LAB_039bd33c:
  puVar13 = (undefined8 *)
            FUN_01ecb238(plVar12,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_039bd374:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_039bd380:
  if (unaff_x23[5] != 0) goto LAB_039bd39c;
  if (lVar17 == 0) goto LAB_039bd570;
  uVar6 = *(undefined4 *)(lVar9 + 0x10);
  uVar11 = FUN_030f4630(lVar17,*(undefined8 *)StringLiteral_5385);
  lVar9 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_5390);
  FUN_035ac8e8(lVar9,0);
  *(undefined4 *)(lVar9 + 0x20) = uVar6;
  *(undefined4 *)(lVar9 + 0x10) = uVar2;
  *(undefined4 *)(lVar9 + 0x14) = uVar4;
  *(undefined8 *)(lVar9 + 0x18) = 0x7fffffff7fffffff;
  *(undefined8 *)(lVar9 + 0x28) = uVar11;
  thunk_FUN_01f51358((undefined8 *)(lVar9 + 0x28),uVar11);
  if (plVar10 == (long *)0x0) goto LAB_039bd570;
  plVar10[3] = lVar9;
  thunk_FUN_01f51358(plVar10 + 3,lVar9);
LAB_039bd48c:
  if ((*unaff_x29 != 0) && (unaff_x22 != 0)) {
    FUN_0399e034(unaff_x22,*unaff_x29,0);
    FUN_039baf84();
    return;
  }
LAB_039bd570:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


