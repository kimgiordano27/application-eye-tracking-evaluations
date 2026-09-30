/*
FUNCTION_NAME: OVRPassthroughLayer.ColorLutHandler$$Clear
ENTRY_POINT: 0367b554
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


/* WARNING: Removing unreachable block (ram,0x0367b910) */

byte OVRPassthroughLayer_ColorLutHandler__Clear
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  byte bVar13;
  int *piVar14;
  ulong uVar15;
  long unaff_x20;
  long *plVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  ulong in_stack_00000010;
  float fStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float in_stack_00000048;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  float fStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined8 uStack0000000000000084;
  
  plVar8 = (long *)(*(code *)*param_4)();
  puVar6 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_49__;
  puVar5 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_48__;
  puVar4 = Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_48__;
  puVar3 = Method_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_<>c_<Render>b__11_0__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  bVar7 = 1;
  do {
    bVar13 = bVar7;
    lVar11 = *plVar8;
    uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar15 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0367b5f4;
        }
        uVar15 = uVar15 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar2,0);
LAB_0367b5f4:
    uVar15 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    if ((uVar15 & 1) == 0) {
      if (plVar8 == (long *)0x0) {
        return bVar13;
      }
      lVar11 = *plVar8;
      uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar15 == 0) goto LAB_0367b89c;
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    lVar11 = *plVar8;
    uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar15 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0367b650;
        }
        uVar15 = uVar15 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar5,0);
LAB_0367b650:
    lVar11 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    plVar16 = *(long **)(unaff_x20 + 0x28);
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar12 = *plVar16;
    lVar10 = *(long *)puVar3;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar10) {
          puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x12) * 0x10 + 0x138);
          goto LAB_0367b6b8;
        }
        uVar15 = uVar15 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar16,lVar10,0x12);
LAB_0367b6b8:
    uVar15 = (*(code *)*puVar9)(plVar16,&stack0x00000070,puVar9[1]);
    bVar7 = 0;
    if ((uVar15 & 1) != 0) {
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar16 = *(long **)(unaff_x20 + 0x28);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar12 = *plVar16;
      uVar1 = *(undefined4 *)(lVar11 + 0x14);
      lVar10 = *(long *)puVar3;
      uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar15 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar10) {
            puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 9) * 0x10 + 0x138);
            goto LAB_0367b730;
          }
          uVar15 = uVar15 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar16,lVar10,9);
LAB_0367b730:
      uVar15 = (*(code *)*puVar9)(plVar16,uVar1,&stack0x00000050,puVar9[1]);
      bVar7 = 0;
      if ((uVar15 & 1) != 0) {
        plVar16 = *(long **)(unaff_x20 + 0x38);
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar10 = *plVar16;
        uVar1 = *(undefined4 *)(lVar11 + 0x14);
        uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar15 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar9 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0367b7a4;
            }
            uVar15 = uVar15 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar15 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar16,*(long *)puVar4,0);
LAB_0367b7a4:
        uVar15 = (*(code *)*puVar9)(plVar16,uVar1,&stack0x00000040,puVar9[1]);
        bVar7 = 0;
        if ((uVar15 & 1) != 0) {
          in_stack_00000028 = uStack0000000000000078;
          in_stack_00000020 = in_stack_00000070;
          uStack0000000000000034 = uStack0000000000000084;
          uStack0000000000000030 = uStack0000000000000080;
          fVar18 = fStack000000000000007c;
          fVar17 = (float)FUN_0367b9f8();
          fVar17 = fVar17 * fStack0000000000000040;
          fVar18 = fVar18 * fStack0000000000000044;
          fVar19 = param_3 * in_stack_00000048;
          lVar10 = *(long *)(unaff_x20 + 0x68);
          in_stack_00000010 = 0;
          _fStack0000000000000018 = 0;
          FUN_0367c924(&stack0x00000010,0);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          param_3 = fStack0000000000000018;
          FUN_02ba874c(in_stack_00000010 & 0xffffffff,in_stack_00000010._4_4_,fStack0000000000000018
                       ,uStack000000000000001c,lVar10,lVar11,*(undefined8 *)puVar6);
          bVar7 = bVar13 & (unaff_s8 - unaff_s11) * (unaff_s10 + unaff_s9) <
                           fVar19 + fVar17 + fVar18;
        }
      }
    }
  } while( true );
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar14 = piVar14 + 4;
    if (uVar15 == 0) break;
    if (*(long *)(piVar14 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0367b8b8;
    }
  }
LAB_0367b89c:
  puVar9 = (undefined8 *)
           FUN_01ecb238(plVar8,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0367b8b8:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
  return bVar13;
}


