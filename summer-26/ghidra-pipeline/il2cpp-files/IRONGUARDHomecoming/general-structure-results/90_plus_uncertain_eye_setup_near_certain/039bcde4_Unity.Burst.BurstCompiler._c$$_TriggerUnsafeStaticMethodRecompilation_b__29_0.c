/*
FUNCTION_NAME: Unity.Burst.BurstCompiler.<>c$$<TriggerUnsafeStaticMethodRecompilation>b__29_0
ENTRY_POINT: 039bcde4
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

void Unity_Burst_BurstCompiler_<>c__<TriggerUnsafeStaticMethodRecompilation>b__29_0(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x19;
  undefined8 uVar16;
  long lVar17;
  long unaff_x22;
  long *unaff_x23;
  long lVar18;
  undefined4 unaff_w24;
  long unaff_x26;
  long *unaff_x29;
  undefined1 auVar19 [16];
  undefined4 uStack0000000000000024;
  long in_stack_00000028;
  
  if (param_1 == 0) goto LAB_039bd570;
  plVar8 = (long *)FUN_039aae1c(param_1,unaff_w24);
  if (plVar8 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else if (*plVar8 != *(long *)StringLiteral_5031) {
    plVar8 = (long *)0x0;
  }
  FUN_039bae78();
  uVar9 = (**(code **)(*unaff_x23 + 0x188))();
  uVar16 = *(undefined8 *)Method_UnityEngine_Component_GetComponent<Point>__;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
  }
  uVar16 = FUN_03579868(uVar16,0);
  uVar2 = FUN_03583338(uVar9,uVar16,0);
  if ((uVar2 & 1) == 0) {
    FUN_039b65ec();
  }
  else {
    FUN_039b554c();
  }
  if ((((*unaff_x29 == 0) ||
       (uVar3 = System_ComponentModel_ArrayConverter___ctor(), *unaff_x29 == 0)) || (unaff_x26 == 0)
      ) || (FUN_0399e034(), *unaff_x29 == 0)) goto LAB_039bd570;
  FUN_039afad4();
  if (unaff_x23[4] == 0) goto LAB_039bd570;
  uStack0000000000000024 = unaff_w24;
  iVar4 = FUN_0265d6c4(unaff_x23[4],*(undefined8 *)StringLiteral_4653);
  if (0 < iVar4) {
    lVar10 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_5387);
    FUN_030f2380(lVar10,*(undefined8 *)StringLiteral_5386);
    if (unaff_x23[4] != 0) {
      plVar11 = (long *)FUN_0265d924(unaff_x23[4],*(undefined8 *)StringLiteral_4658);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar13 = *plVar11;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__)
            {
              puVar12 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_039bcfb4;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar12 = (undefined8 *)
                  FUN_01ecb238(plVar11,*(long *)
                                        Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                               ,0);
LAB_039bcfb4:
        uVar14 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        if ((uVar14 & 1) == 0) {
          if (plVar11 == (long *)0x0) goto LAB_039bd380;
          lVar13 = *plVar11;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 == 0) goto LAB_039bd33c;
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          goto LAB_039bd324;
        }
        lVar13 = *plVar11;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_4657) {
              puVar12 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_039bd01c;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar12 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)StringLiteral_4657,0);
LAB_039bd01c:
        lVar13 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar18 = *(long *)(lVar13 + 0x10);
        if (lVar18 == 0) {
          uVar9 = *(undefined8 *)(lVar13 + 0x18);
          if (*(int *)(*(long *)Method_UnityEngine_Rendering_CommandBuffer_DrawMesh__ + 0xe0) == 0)
          {
            thunk_FUN_01ee6d7c();
          }
          lVar18 = FUN_03986848(uVar9,0);
        }
        if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar17 = *(long *)(unaff_x19 + 0x18);
        uVar5 = System_ComponentModel_ArrayConverter___ctor();
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        auVar19 = FUN_039c8460(lVar17,lVar18,uVar5,0);
        if (*(long *)(unaff_x19 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_02741ef0(*(long *)(unaff_x19 + 0x38),lVar18,*(undefined8 *)StringLiteral_5389);
        if (*(long *)(lVar13 + 0x28) == 0) {
          lVar18 = 0;
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
          uVar5 = FUN_039afa78();
          if (*unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar6 = System_ComponentModel_ArrayConverter___ctor();
          FUN_039b5e34();
          FUN_039b554c();
          FUN_039b5c40();
          if (*unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar7 = System_ComponentModel_ArrayConverter___ctor();
          lVar18 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_5382);
          FUN_035ac8e8(lVar18,0);
          *(undefined4 *)(lVar18 + 0x10) = uVar5;
          *(undefined4 *)(lVar18 + 0x14) = uVar6;
          *(undefined4 *)(lVar18 + 0x18) = uVar7;
          if (*unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_039b0260();
          FUN_039baf84();
        }
        FUN_039bae78();
        if ((uVar2 & 1) == 0) {
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
        uVar5 = FUN_039afa78();
        if (*unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar6 = System_ComponentModel_ArrayConverter___ctor();
        FUN_039b5e34();
        if ((uVar2 & 1) == 0) {
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
        FUN_039b0380(*unaff_x29,uVar2 & 1,unaff_x26);
        if (*unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar7 = System_ComponentModel_ArrayConverter___ctor();
        uVar16 = *(undefined8 *)(lVar13 + 0x18);
        uVar9 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_5383);
        FUN_039b4700(uVar9,uVar5,uVar6,uVar7,uVar16,lVar18);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar13 = *(long *)(lVar10 + 0x10);
        lVar18 = *(long *)StringLiteral_5384;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
          puVar12 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
          *puVar12 = uVar9;
          thunk_FUN_01f51358(puVar12,uVar9);
        }
        else {
          FUN_030f2bb4(lVar10,uVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
        }
        FUN_039baf84();
        if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar13 = *(long *)(unaff_x19 + 0x18);
        uVar5 = System_ComponentModel_ArrayConverter___ctor();
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_039c2c88(lVar13,auVar19._0_8_,auVar19._8_8_,uVar5,0);
      } while( true );
    }
    goto LAB_039bd570;
  }
  if (unaff_x23[5] == 0) goto LAB_039bd570;
  lVar10 = 0;
LAB_039bd39c:
  FUN_039bae78();
  if ((*(long *)(unaff_x19 + 0x10) == 0) || (in_stack_00000028 == 0)) goto LAB_039bd570;
  FUN_0399e034(in_stack_00000028,*(long *)(unaff_x19 + 0x10),0);
  if (*unaff_x29 == 0) goto LAB_039bd570;
  FUN_039b0038(*unaff_x29,in_stack_00000028);
  FUN_039b65ec();
  if ((*(long *)(unaff_x19 + 0x10) == 0) || (FUN_039b00bc(), *unaff_x29 == 0)) goto LAB_039bd570;
  uVar5 = *(undefined4 *)(in_stack_00000028 + 0x10);
  uVar6 = *(undefined4 *)(unaff_x26 + 0x10);
  uVar7 = System_ComponentModel_ArrayConverter___ctor();
  if (lVar10 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_030f4630(lVar10,*(undefined8 *)StringLiteral_5385);
  }
  lVar10 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_5390);
  FUN_035ac8e8(lVar10,0);
  *(undefined4 *)(lVar10 + 0x18) = uVar5;
  *(undefined4 *)(lVar10 + 0x1c) = uVar7;
  *(undefined4 *)(lVar10 + 0x20) = uVar6;
  *(undefined4 *)(lVar10 + 0x10) = uStack0000000000000024;
  *(undefined4 *)(lVar10 + 0x14) = uVar3;
  *(undefined8 *)(lVar10 + 0x28) = uVar9;
  thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x28),uVar9);
  if (plVar8 == (long *)0x0) goto LAB_039bd570;
  plVar8[3] = lVar10;
  thunk_FUN_01f51358(plVar8 + 3,lVar10);
  FUN_039baf84();
  goto LAB_039bd48c;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_039bd324:
    if (*(long *)(piVar15 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar12 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_039bd374;
    }
  }
LAB_039bd33c:
  puVar12 = (undefined8 *)
            FUN_01ecb238(plVar11,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_039bd374:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
LAB_039bd380:
  if (unaff_x23[5] != 0) goto LAB_039bd39c;
  if (lVar10 == 0) goto LAB_039bd570;
  uVar5 = *(undefined4 *)(unaff_x26 + 0x10);
  uVar9 = FUN_030f4630(lVar10,*(undefined8 *)StringLiteral_5385);
  lVar10 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_5390);
  FUN_035ac8e8(lVar10,0);
  *(undefined4 *)(lVar10 + 0x20) = uVar5;
  *(undefined4 *)(lVar10 + 0x10) = uStack0000000000000024;
  *(undefined4 *)(lVar10 + 0x14) = uVar3;
  *(undefined8 *)(lVar10 + 0x18) = 0x7fffffff7fffffff;
  *(undefined8 *)(lVar10 + 0x28) = uVar9;
  thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x28),uVar9);
  if (plVar8 == (long *)0x0) goto LAB_039bd570;
  plVar8[3] = lVar10;
  thunk_FUN_01f51358(plVar8 + 3,lVar10);
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


