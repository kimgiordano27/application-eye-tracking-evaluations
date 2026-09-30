/*
FUNCTION_NAME: Unity.Burst.Intrinsics.X86.Sse4_1$$max_epi8
ENTRY_POINT: 039f03f4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x039f06a4) */

long Unity_Burst_Intrinsics_X86_Sse4_1__max_epi8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  ulong unaff_x20;
  int unaff_w21;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined1 auVar13 [16];
  long in_stack_00000030;
  
  do {
    if (param_1 != 0) {
      FUN_02c7ab68(&stack0x00000020,*(undefined8 *)StringLiteral_6260);
      return unaff_x23;
    }
    do {
      uVar4 = FUN_02c7ab6c(&stack0x00000020,*unaff_x25);
      lVar11 = in_stack_00000030;
      if ((uVar4 & 1) == 0) {
        FUN_02c7ab68(&stack0x00000020,*(undefined8 *)StringLiteral_6260);
        plVar5 = (long *)StringLiteral_6127;
        if (((unaff_w21 != 1) && (plVar5 = (long *)StringLiteral_6177, unaff_w21 != 3)) ||
           (lVar11 = *plVar5, lVar11 == 0)) goto LAB_039f0668;
        lVar7 = 0x30;
        if ((unaff_x20 & 1) == 0) {
          lVar7 = 0x48;
        }
        plVar5 = (long *)FUN_039f0e00(*(undefined8 *)(unaff_x19 + lVar7));
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar7 = *plVar5;
        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar4 == 0) goto LAB_039f04a8;
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_039f0490;
      }
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(in_stack_00000030 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar4 = thunk_FUN_0340e318(*(undefined8 *)(*(long *)(in_stack_00000030 + 0x10) + 0x10));
    } while ((uVar4 & 1) == 0);
    uVar12 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = FUN_0332f424(&stack0x00000048,*unaff_x26);
    param_1 = FUN_039f0c40(uVar12,uVar3);
    unaff_x23 = param_1;
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar8 = piVar8 + 4;
    if (uVar4 == 0) break;
LAB_039f0490:
    if (*(long *)(piVar8 + -2) == *(long *)StringLiteral_6263) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_039f04ec;
    }
  }
LAB_039f04a8:
  puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)StringLiteral_6263,0);
LAB_039f04ec:
  plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
  puVar2 = StringLiteral_6264;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar7 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_039f055c;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_039f055c:
    uVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar4 & 1) == 0) {
      lVar7 = 0;
      iVar10 = 0x14;
      iVar9 = 0x14;
      goto joined_r0x039f05f4;
    }
    lVar7 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_039f05b8;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_039f05b8:
    auVar13 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    lVar7 = auVar13._8_8_;
    uVar4 = thunk_FUN_0340e318(auVar13._0_8_,lVar11,0);
  } while ((uVar4 & 1) == 0);
  iVar10 = 0x10;
  iVar9 = 0x10;
joined_r0x039f05f4:
  if (plVar5 != (long *)0x0) {
    lVar11 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_039f064c;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_039f064c:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
    iVar9 = iVar10;
  }
  if ((iVar9 == 0x14) || (iVar9 == 0)) {
LAB_039f0668:
    lVar7 = *(long *)Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__;
  }
  return lVar7;
}


