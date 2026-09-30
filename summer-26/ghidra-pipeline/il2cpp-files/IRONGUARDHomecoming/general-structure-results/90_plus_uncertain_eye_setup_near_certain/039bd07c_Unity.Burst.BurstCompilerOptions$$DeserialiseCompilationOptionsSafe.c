/*
FUNCTION_NAME: Unity.Burst.BurstCompilerOptions$$DeserialiseCompilationOptionsSafe
ENTRY_POINT: 039bd07c
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

void Unity_Burst_BurstCompilerOptions__DeserialiseCompilationOptionsSafe
               (undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long unaff_x27;
  undefined8 uVar10;
  long *unaff_x29;
  undefined1 auVar11 [16];
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  ulong in_stack_00000040;
  long *in_stack_00000048;
  
  do {
    auVar11 = FUN_039c8460(unaff_x21,unaff_x23,param_3,0);
    if (*(long *)(unaff_x19 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_02741ef0(*(long *)(unaff_x19 + 0x38),unaff_x23,*(undefined8 *)StringLiteral_5389);
    if (*(long *)(unaff_x20 + 0x28) == 0) {
      lVar5 = 0;
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
      lVar5 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_5382);
      FUN_035ac8e8(lVar5,0);
      *(undefined4 *)(lVar5 + 0x10) = uVar2;
      *(undefined4 *)(lVar5 + 0x14) = uVar3;
      *(undefined4 *)(lVar5 + 0x18) = uVar4;
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
    uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar6 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_5383);
    FUN_039b4700(uVar6,uVar2,uVar3,uVar4,uVar10,lVar5);
    if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *(long *)(unaff_x27 + 0x10);
    *(int *)(unaff_x27 + 0x1c) = *(int *)(unaff_x27 + 0x1c) + 1;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar1 = *(uint *)(unaff_x27 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(unaff_x27 + 0x18) = uVar1 + 1;
      puVar7 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
      *puVar7 = uVar6;
      thunk_FUN_01f51358(puVar7,uVar6);
    }
    else {
      FUN_030f2bb4();
    }
    FUN_039baf84();
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *(long *)(unaff_x19 + 0x18);
    uVar2 = System_ComponentModel_ArrayConverter___ctor();
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_039c2c88(lVar5,auVar11._0_8_,auVar11._8_8_,uVar2,0);
    lVar5 = *in_stack_00000048;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_039bcfb4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ecb238(in_stack_00000048,
                          *(long *)
                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_039bcfb4:
    uVar8 = (*(code *)*puVar7)(in_stack_00000048,puVar7[1]);
    if ((uVar8 & 1) == 0) {
      if (in_stack_00000048 == (long *)0x0) goto LAB_039bd380;
      lVar5 = *in_stack_00000048;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 == 0) goto LAB_039bd33c;
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *in_stack_00000048;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)StringLiteral_4657) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_039bd01c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(in_stack_00000048,*(long *)StringLiteral_4657,0);
LAB_039bd01c:
    unaff_x20 = (*(code *)*puVar7)(in_stack_00000048,puVar7[1]);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    unaff_x23 = *(long *)(unaff_x20 + 0x10);
    if (unaff_x23 == 0) {
      uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
      if (*(int *)(*(long *)Method_UnityEngine_Rendering_CommandBuffer_DrawMesh__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      unaff_x23 = FUN_03986848(uVar6,0);
    }
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    unaff_x21 = *(long *)(unaff_x19 + 0x18);
    param_3 = System_ComponentModel_ArrayConverter___ctor();
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    param_3 = param_3 & 0xffffffff;
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_039bd374;
    }
  }
LAB_039bd33c:
  puVar7 = (undefined8 *)
           FUN_01ecb238(in_stack_00000048,
                        *(long *)
                         Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,0)
  ;
LAB_039bd374:
  (*(code *)*puVar7)(in_stack_00000048,puVar7[1]);
LAB_039bd380:
  if (*(long *)(in_stack_00000030 + 0x28) == 0) {
    if (unaff_x27 == 0) goto LAB_039bd570;
    uVar2 = *(undefined4 *)(in_stack_00000038 + 0x10);
    uVar6 = FUN_030f4630();
    lVar5 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_5390);
    FUN_035ac8e8(lVar5,0);
    *(undefined4 *)(lVar5 + 0x20) = uVar2;
    *(undefined4 *)(lVar5 + 0x10) = in_stack_00000020._4_4_;
    *(undefined4 *)(lVar5 + 0x14) = in_stack_00000010._4_4_;
    *(undefined8 *)(lVar5 + 0x18) = 0x7fffffff7fffffff;
    *(undefined8 *)(lVar5 + 0x28) = uVar6;
    thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x28),uVar6);
    if (in_stack_00000018 == 0) goto LAB_039bd570;
    *(long *)(in_stack_00000018 + 0x18) = lVar5;
    thunk_FUN_01f51358((long *)(in_stack_00000018 + 0x18),lVar5);
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
    if (unaff_x27 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_030f4630();
    }
    lVar5 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_5390);
    FUN_035ac8e8(lVar5,0);
    *(undefined4 *)(lVar5 + 0x18) = uVar2;
    *(undefined4 *)(lVar5 + 0x1c) = uVar4;
    *(undefined4 *)(lVar5 + 0x20) = uVar3;
    *(undefined4 *)(lVar5 + 0x10) = in_stack_00000020._4_4_;
    *(undefined4 *)(lVar5 + 0x14) = in_stack_00000010._4_4_;
    *(undefined8 *)(lVar5 + 0x28) = uVar6;
    thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x28),uVar6);
    if (in_stack_00000018 == 0) goto LAB_039bd570;
    *(long *)(in_stack_00000018 + 0x18) = lVar5;
    thunk_FUN_01f51358((long *)(in_stack_00000018 + 0x18),lVar5);
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


