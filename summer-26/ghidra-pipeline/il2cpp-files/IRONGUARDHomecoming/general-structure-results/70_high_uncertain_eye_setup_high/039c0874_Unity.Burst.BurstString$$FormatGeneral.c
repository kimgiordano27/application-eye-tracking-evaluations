/*
FUNCTION_NAME: Unity.Burst.BurstString$$FormatGeneral
ENTRY_POINT: 039c0874
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x039c09c8) */

void Unity_Burst_BurstString__FormatGeneral(long param_1)

{
  int iVar1;
  undefined1 in_CY;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long in_x9;
  long in_x10;
  int *piVar7;
  ulong in_x11;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  
  do {
    if (((bool)in_CY) && (*(long *)(*(long *)(in_x10 + 200) + in_x11 * 8 + -8) == in_x9)) {
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar3 = FUN_0358471c(param_1,0);
      if ((uVar3 & 1) != 0) {
        uVar4 = FUN_0398f474(unaff_x21[4],0);
        uVar5 = thunk_FUN_01efb3a4(StringLiteral_5427);
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar4,uVar5);
      }
    }
    do {
      FUN_039beb38();
      FUN_039c0608();
      if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_039ab8e8();
LAB_039c0700:
      lVar6 = *unaff_x19;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_039c074c;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238();
LAB_039c074c:
      uVar3 = (*(code *)*puVar2)();
      if ((uVar3 & 1) == 0) {
        if (unaff_x19 == (long *)0x0) {
          return;
        }
        lVar6 = *unaff_x19;
        uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar3 == 0) goto LAB_039c0948;
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_039c0930;
      }
      lVar6 = *unaff_x19;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_039c07a8;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238();
LAB_039c07a8:
      unaff_x21 = (long *)(*(code *)*puVar2)();
      if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      iVar1 = (int)unaff_x21[2];
      if (iVar1 == 0) {
        if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_039ab888();
        if (*unaff_x21 != *unaff_x26) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(unaff_x21);
        }
        FUN_039b6ca4();
        goto LAB_039c0700;
      }
      if (iVar1 != 1) {
        if (iVar1 == 2) {
          if (*unaff_x21 != *unaff_x23) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(unaff_x21);
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
        goto LAB_039c0700;
      }
      if (*unaff_x21 != *unaff_x27) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(unaff_x21);
      }
      if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_039ab888();
      lVar6 = unaff_x21[3];
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      param_1 = FUN_039c0b0c(lVar6);
    } while ((long *)unaff_x21[3] == (long *)0x0);
    in_x10 = *(long *)unaff_x21[3];
    in_x9 = *unaff_x29;
    in_x11 = (ulong)*(byte *)(in_x9 + 0x130);
    in_CY = *(byte *)(in_x9 + 0x130) <= *(byte *)(in_x10 + 0x130);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar7 = piVar7 + 4;
    if (uVar3 == 0) break;
LAB_039c0930:
    if (*(long *)(piVar7 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_039c0964;
    }
  }
LAB_039c0948:
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_039c0964:
  (*(code *)*puVar2)();
  return;
}


