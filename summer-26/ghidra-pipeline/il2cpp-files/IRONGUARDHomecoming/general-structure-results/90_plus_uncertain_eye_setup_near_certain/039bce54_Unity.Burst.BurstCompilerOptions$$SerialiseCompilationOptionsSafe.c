/*
FUNCTION_NAME: Unity.Burst.BurstCompilerOptions$$SerialiseCompilationOptionsSafe
ENTRY_POINT: 039bce54
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x039bd5d0) */
/* WARNING: Removing unreachable block (ram,0x039bd38c) */
/* WARNING: Removing unreachable block (ram,0x039bd4c8) */

void Unity_Burst_BurstCompilerOptions__SerialiseCompilationOptionsSafe(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  undefined8 uVar13;
  long lVar14;
  long unaff_x22;
  long unaff_x23;
  long lVar15;
  undefined4 unaff_w24;
  long unaff_x25;
  long unaff_x26;
  undefined8 uVar16;
  long *unaff_x29;
  undefined1 auVar17 [16];
  undefined4 uStack0000000000000024;
  long in_stack_00000028;
  uint uStack0000000000000044;
  
  thunk_FUN_01ee6d7c(param_1);
  FUN_03579868();
  uStack0000000000000044 = FUN_03583338();
  if ((uStack0000000000000044 & 1) == 0) {
    FUN_039b65ec();
  }
  else {
    FUN_039b554c();
  }
  if ((((*unaff_x29 == 0) ||
       (uVar2 = System_ComponentModel_ArrayConverter___ctor(), *unaff_x29 == 0)) || (unaff_x26 == 0)
      ) || (FUN_0399e034(), *unaff_x29 == 0)) goto LAB_039bd570;
  FUN_039afad4();
  if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_039bd570;
  uStack0000000000000024 = unaff_w24;
  iVar3 = FUN_0265d6c4(*(long *)(unaff_x23 + 0x20),*(undefined8 *)StringLiteral_4653);
  if (0 < iVar3) {
    lVar7 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_5387);
    FUN_030f2380(lVar7,*(undefined8 *)StringLiteral_5386);
    if (*(long *)(unaff_x23 + 0x20) != 0) {
      plVar8 = (long *)FUN_0265d924(*(long *)(unaff_x23 + 0x20),*(undefined8 *)StringLiteral_4658);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar10 = *plVar8;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__)
            {
              puVar9 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_039bcfb4;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar9 = (undefined8 *)
                 FUN_01ecb238(plVar8,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                              ,0);
LAB_039bcfb4:
        uVar11 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if ((uVar11 & 1) == 0) {
          if (plVar8 == (long *)0x0) goto LAB_039bd380;
          lVar10 = *plVar8;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 == 0) goto LAB_039bd33c;
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_039bd324;
        }
        lVar10 = *plVar8;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)StringLiteral_4657) {
              puVar9 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_039bd01c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)StringLiteral_4657,0);
LAB_039bd01c:
        lVar10 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar15 = *(long *)(lVar10 + 0x10);
        if (lVar15 == 0) {
          uVar13 = *(undefined8 *)(lVar10 + 0x18);
          if (*(int *)(*(long *)Method_UnityEngine_Rendering_CommandBuffer_DrawMesh__ + 0xe0) == 0)
          {
            thunk_FUN_01ee6d7c();
          }
          lVar15 = FUN_03986848(uVar13,0);
        }
        if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar14 = *(long *)(unaff_x19 + 0x18);
        uVar4 = System_ComponentModel_ArrayConverter___ctor();
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        auVar17 = FUN_039c8460(lVar14,lVar15,uVar4,0);
        if (*(long *)(unaff_x19 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_02741ef0(*(long *)(unaff_x19 + 0x38),lVar15,*(undefined8 *)StringLiteral_5389);
        if (*(long *)(lVar10 + 0x28) == 0) {
          lVar15 = 0;
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
          uVar4 = FUN_039afa78();
          if (*unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar5 = System_ComponentModel_ArrayConverter___ctor();
          FUN_039b5e34();
          FUN_039b554c();
          FUN_039b5c40();
          if (*unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar6 = System_ComponentModel_ArrayConverter___ctor();
          lVar15 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_5382);
          FUN_035ac8e8(lVar15,0);
          *(undefined4 *)(lVar15 + 0x10) = uVar4;
          *(undefined4 *)(lVar15 + 0x14) = uVar5;
          *(undefined4 *)(lVar15 + 0x18) = uVar6;
          if (*unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_039b0260();
          FUN_039baf84();
        }
        FUN_039bae78();
        if ((uStack0000000000000044 & 1) == 0) {
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
        uVar4 = FUN_039afa78();
        if (*unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar5 = System_ComponentModel_ArrayConverter___ctor();
        FUN_039b5e34();
        if ((uStack0000000000000044 & 1) == 0) {
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
        FUN_039b0380(*unaff_x29,uStack0000000000000044 & 1,unaff_x26);
        if (*unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar6 = System_ComponentModel_ArrayConverter___ctor();
        uVar16 = *(undefined8 *)(lVar10 + 0x18);
        uVar13 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_5383);
        FUN_039b4700(uVar13,uVar4,uVar5,uVar6,uVar16,lVar15);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar10 = *(long *)(lVar7 + 0x10);
        lVar15 = *(long *)StringLiteral_5384;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          puVar9 = (undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
          *puVar9 = uVar13;
          thunk_FUN_01f51358(puVar9,uVar13);
        }
        else {
          FUN_030f2bb4(lVar7,uVar13,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
        FUN_039baf84();
        if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar10 = *(long *)(unaff_x19 + 0x18);
        uVar4 = System_ComponentModel_ArrayConverter___ctor();
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_039c2c88(lVar10,auVar17._0_8_,auVar17._8_8_,uVar4,0);
      } while( true );
    }
    goto LAB_039bd570;
  }
  if (*(long *)(unaff_x23 + 0x28) == 0) goto LAB_039bd570;
  lVar7 = 0;
LAB_039bd39c:
  FUN_039bae78();
  if ((*(long *)(unaff_x19 + 0x10) == 0) || (in_stack_00000028 == 0)) goto LAB_039bd570;
  FUN_0399e034(in_stack_00000028,*(long *)(unaff_x19 + 0x10),0);
  if (*unaff_x29 == 0) goto LAB_039bd570;
  FUN_039b0038(*unaff_x29,in_stack_00000028);
  FUN_039b65ec();
  if ((*(long *)(unaff_x19 + 0x10) == 0) || (FUN_039b00bc(), *unaff_x29 == 0)) goto LAB_039bd570;
  uVar4 = *(undefined4 *)(in_stack_00000028 + 0x10);
  uVar5 = *(undefined4 *)(unaff_x26 + 0x10);
  uVar6 = System_ComponentModel_ArrayConverter___ctor();
  if (lVar7 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = FUN_030f4630(lVar7,*(undefined8 *)StringLiteral_5385);
  }
  lVar7 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_5390);
  FUN_035ac8e8(lVar7,0);
  *(undefined4 *)(lVar7 + 0x18) = uVar4;
  *(undefined4 *)(lVar7 + 0x1c) = uVar6;
  *(undefined4 *)(lVar7 + 0x20) = uVar5;
  *(undefined4 *)(lVar7 + 0x10) = uStack0000000000000024;
  *(undefined4 *)(lVar7 + 0x14) = uVar2;
  *(undefined8 *)(lVar7 + 0x28) = uVar13;
  thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x28),uVar13);
  if (unaff_x25 == 0) goto LAB_039bd570;
  *(long *)(unaff_x25 + 0x18) = lVar7;
  thunk_FUN_01f51358((long *)(unaff_x25 + 0x18),lVar7);
  FUN_039baf84();
  goto LAB_039bd48c;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_039bd324:
    if (*(long *)(piVar12 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar9 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_039bd374;
    }
  }
LAB_039bd33c:
  puVar9 = (undefined8 *)
           FUN_01ecb238(plVar8,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_039bd374:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_039bd380:
  if (*(long *)(unaff_x23 + 0x28) != 0) goto LAB_039bd39c;
  if (lVar7 == 0) goto LAB_039bd570;
  uVar4 = *(undefined4 *)(unaff_x26 + 0x10);
  uVar13 = FUN_030f4630(lVar7,*(undefined8 *)StringLiteral_5385);
  lVar7 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_5390);
  FUN_035ac8e8(lVar7,0);
  *(undefined4 *)(lVar7 + 0x20) = uVar4;
  *(undefined4 *)(lVar7 + 0x10) = uStack0000000000000024;
  *(undefined4 *)(lVar7 + 0x14) = uVar2;
  *(undefined8 *)(lVar7 + 0x18) = 0x7fffffff7fffffff;
  *(undefined8 *)(lVar7 + 0x28) = uVar13;
  thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x28),uVar13);
  if (unaff_x25 == 0) goto LAB_039bd570;
  *(long *)(unaff_x25 + 0x18) = lVar7;
  thunk_FUN_01f51358((long *)(unaff_x25 + 0x18),lVar7);
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


