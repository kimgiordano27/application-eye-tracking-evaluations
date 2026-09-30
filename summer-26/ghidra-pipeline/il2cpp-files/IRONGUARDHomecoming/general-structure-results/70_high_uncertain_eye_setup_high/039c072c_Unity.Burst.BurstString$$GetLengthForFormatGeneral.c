/*
FUNCTION_NAME: Unity.Burst.BurstString$$GetLengthForFormatGeneral
ENTRY_POINT: 039c072c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x039c09c8) */

void Unity_Burst_BurstString__GetLengthForFormatGeneral
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  byte bVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong in_x9;
  int *in_x10;
  long lVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  
code_r0x039c072c:
  if (!(bool)in_ZR) goto LAB_039c0718;
LAB_039c0730:
  puVar3 = (undefined8 *)FUN_01ecb238();
  do {
    uVar4 = (*(code *)*puVar3)();
    if ((uVar4 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar8 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar4 == 0) goto LAB_039c0948;
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_039c07a8;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_039c07a8:
    plVar5 = (long *)(*(code *)*puVar3)();
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    iVar1 = (int)plVar5[2];
    if (iVar1 == 0) {
      if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_039ab888();
      if (*plVar5 != *unaff_x26) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar5);
      }
      FUN_039b6ca4();
    }
    else if (iVar1 == 1) {
      if (*plVar5 != *unaff_x27) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar5);
      }
      if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_039ab888();
      lVar8 = plVar5[3];
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar8 = FUN_039c0b0c(lVar8);
      if ((long *)plVar5[3] != (long *)0x0) {
        lVar9 = *(long *)plVar5[3];
        bVar2 = *(byte *)(*unaff_x29 + 0x130);
        if ((bVar2 <= *(byte *)(lVar9 + 0x130)) &&
           (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar2 * 8 + -8) == *unaff_x29)) {
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar4 = FUN_0358471c(lVar8,0);
          if ((uVar4 & 1) != 0) {
            uVar6 = FUN_0398f474(plVar5[4],0);
            uVar7 = thunk_FUN_01efb3a4(StringLiteral_5427);
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar6,uVar7);
          }
        }
      }
      FUN_039beb38();
      FUN_039c0608();
      if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_039ab8e8();
    }
    else if (iVar1 == 2) {
      if (*plVar5 != *unaff_x23) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar5);
      }
      if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_039ab888();
      FUN_039beb38();
      FUN_039c01ac();
      if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_039ab8e8();
    }
    param_1 = *unaff_x19;
    param_3 = *unaff_x24;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_039c0730;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_039c0718:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      in_x10 = in_x10 + 4;
      goto code_r0x039c072c;
    }
    puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar10 = piVar10 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_039c0964;
    }
  }
LAB_039c0948:
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_039c0964:
  (*(code *)*puVar3)();
  return;
}


