/*
FUNCTION_NAME: Unity.Burst.SafeStringArrayHelper$$SerialiseStringArraySafe
ENTRY_POINT: 039bcf2c
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


/* WARNING: Removing unreachable block (ram,0x039bd38c) */
/* WARNING: Removing unreachable block (ram,0x039bd4c8) */
/* WARNING: Removing unreachable block (ram,0x039bd5d0) */

void Unity_Burst_SafeStringArrayHelper__SerialiseStringArraySafe(long param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  undefined8 uVar10;
  long lVar11;
  long unaff_x23;
  long lVar12;
  undefined8 uVar13;
  long *unaff_x29;
  undefined1 auVar14 [16];
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  ulong in_stack_00000040;
  
  FUN_030f2380(param_2,**(undefined8 **)(param_1 + 0x428));
  if (*(long *)(unaff_x23 + 0x20) != 0) {
    plVar5 = (long *)FUN_0265d924(*(long *)(unaff_x23 + 0x20),*(undefined8 *)StringLiteral_4658);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar7 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_039bcfb4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ecb238(plVar5,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                            ,0);
LAB_039bcfb4:
      uVar8 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar8 & 1) == 0) {
        if (plVar5 == (long *)0x0) goto LAB_039bd380;
        lVar7 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 == 0) goto LAB_039bd33c;
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_039bd324;
      }
      lVar7 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)StringLiteral_4657) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_039bd01c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)StringLiteral_4657,0);
LAB_039bd01c:
      lVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar12 = *(long *)(lVar7 + 0x10);
      if (lVar12 == 0) {
        uVar10 = *(undefined8 *)(lVar7 + 0x18);
        if (*(int *)(*(long *)Method_UnityEngine_Rendering_CommandBuffer_DrawMesh__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar12 = FUN_03986848(uVar10,0);
      }
      if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar11 = *(long *)(unaff_x19 + 0x18);
      uVar2 = System_ComponentModel_ArrayConverter___ctor();
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      auVar14 = FUN_039c8460(lVar11,lVar12,uVar2,0);
      if (*(long *)(unaff_x19 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_02741ef0(*(long *)(unaff_x19 + 0x38),lVar12,*(undefined8 *)StringLiteral_5389);
      if (*(long *)(lVar7 + 0x28) == 0) {
        lVar12 = 0;
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
        uVar2 = FUN_039afa78();
        if (*unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar3 = System_ComponentModel_ArrayConverter___ctor();
        FUN_039b5e34();
        FUN_039b554c();
        FUN_039b5c40();
        if (*unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar4 = System_ComponentModel_ArrayConverter___ctor();
        lVar12 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_5382);
        FUN_035ac8e8(lVar12,0);
        *(undefined4 *)(lVar12 + 0x10) = uVar2;
        *(undefined4 *)(lVar12 + 0x14) = uVar3;
        *(undefined4 *)(lVar12 + 0x18) = uVar4;
        if (*unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_039b0260();
        FUN_039baf84();
      }
      FUN_039bae78();
      if ((in_stack_00000040 & 0x100000000) == 0) {
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
      uVar2 = FUN_039afa78();
      if (*unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar3 = System_ComponentModel_ArrayConverter___ctor();
      FUN_039b5e34();
      if ((in_stack_00000040 & 0x100000000) == 0) {
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
      FUN_039b0380(*unaff_x29,in_stack_00000040._4_4_ & 1,in_stack_00000038);
      if (*unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar4 = System_ComponentModel_ArrayConverter___ctor();
      uVar13 = *(undefined8 *)(lVar7 + 0x18);
      uVar10 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_5383);
      FUN_039b4700(uVar10,uVar2,uVar3,uVar4,uVar13,lVar12);
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *(long *)(param_2 + 0x10);
      lVar12 = *(long *)StringLiteral_5384;
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar1 = *(uint *)(param_2 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(param_2 + 0x18) = uVar1 + 1;
        puVar6 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
        *puVar6 = uVar10;
        thunk_FUN_01f51358(puVar6,uVar10);
      }
      else {
        FUN_030f2bb4(param_2,uVar10,
                     *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      }
      FUN_039baf84();
      if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *(long *)(unaff_x19 + 0x18);
      uVar2 = System_ComponentModel_ArrayConverter___ctor();
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_039c2c88(lVar7,auVar14._0_8_,auVar14._8_8_,uVar2,0);
    } while( true );
  }
  goto LAB_039bd570;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_039bd324:
    if (*(long *)(piVar9 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_039bd374;
    }
  }
LAB_039bd33c:
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_039bd374:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_039bd380:
  if (*(long *)(in_stack_00000030 + 0x28) == 0) {
    if (param_2 == 0) goto LAB_039bd570;
    uVar2 = *(undefined4 *)(in_stack_00000038 + 0x10);
    uVar10 = FUN_030f4630(param_2,*(undefined8 *)StringLiteral_5385);
    lVar7 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_5390);
    FUN_035ac8e8(lVar7,0);
    *(undefined4 *)(lVar7 + 0x20) = uVar2;
    *(undefined4 *)(lVar7 + 0x10) = in_stack_00000020._4_4_;
    *(undefined4 *)(lVar7 + 0x14) = in_stack_00000010._4_4_;
    *(undefined8 *)(lVar7 + 0x18) = 0x7fffffff7fffffff;
    *(undefined8 *)(lVar7 + 0x28) = uVar10;
    thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x28),uVar10);
    if (in_stack_00000018 == 0) goto LAB_039bd570;
    *(long *)(in_stack_00000018 + 0x18) = lVar7;
    thunk_FUN_01f51358((long *)(in_stack_00000018 + 0x18),lVar7);
  }
  else {
    FUN_039bae78();
    if ((*(long *)(unaff_x19 + 0x10) == 0) || (in_stack_00000028 == 0)) goto LAB_039bd570;
    FUN_0399e034(in_stack_00000028,*(long *)(unaff_x19 + 0x10),0);
    if (*unaff_x29 == 0) goto LAB_039bd570;
    FUN_039b0038(*unaff_x29,in_stack_00000028);
    FUN_039b65ec();
    if ((*(long *)(unaff_x19 + 0x10) == 0) || (FUN_039b00bc(), *unaff_x29 == 0)) goto LAB_039bd570;
    uVar2 = *(undefined4 *)(in_stack_00000028 + 0x10);
    uVar3 = *(undefined4 *)(in_stack_00000038 + 0x10);
    uVar4 = System_ComponentModel_ArrayConverter___ctor();
    if (param_2 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = FUN_030f4630(param_2,*(undefined8 *)StringLiteral_5385);
    }
    lVar7 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_5390);
    FUN_035ac8e8(lVar7,0);
    *(undefined4 *)(lVar7 + 0x18) = uVar2;
    *(undefined4 *)(lVar7 + 0x1c) = uVar4;
    *(undefined4 *)(lVar7 + 0x20) = uVar3;
    *(undefined4 *)(lVar7 + 0x10) = in_stack_00000020._4_4_;
    *(undefined4 *)(lVar7 + 0x14) = in_stack_00000010._4_4_;
    *(undefined8 *)(lVar7 + 0x28) = uVar10;
    thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x28),uVar10);
    if (in_stack_00000018 == 0) goto LAB_039bd570;
    *(long *)(in_stack_00000018 + 0x18) = lVar7;
    thunk_FUN_01f51358((long *)(in_stack_00000018 + 0x18),lVar7);
    FUN_039baf84();
  }
  if ((*unaff_x29 != 0) && (in_stack_00000008 != 0)) {
    FUN_0399e034(in_stack_00000008,*unaff_x29,0);
    FUN_039baf84();
    return;
  }
LAB_039bd570:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


