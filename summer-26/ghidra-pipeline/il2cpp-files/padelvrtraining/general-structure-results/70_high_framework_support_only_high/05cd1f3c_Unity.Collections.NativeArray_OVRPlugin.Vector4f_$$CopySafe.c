/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopySafe
ENTRY_POINT: 05cd1f3c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05cd20bc) */
/* WARNING: Removing unreachable block (ram,0x05cd212c) */
/* WARNING: Removing unreachable block (ram,0x05cd2134) */
/* WARNING: Removing unreachable block (ram,0x05cd2140) */
/* WARNING: Removing unreachable block (ram,0x05cd214c) */
/* WARNING: Removing unreachable block (ram,0x05cd20d8) */
/* WARNING: Removing unreachable block (ram,0x05cd20e4) */
/* WARNING: Removing unreachable block (ram,0x05cd1fd4) */
/* WARNING: Removing unreachable block (ram,0x05cd1fe4) */
/* WARNING: Removing unreachable block (ram,0x05cd2170) */
/* WARNING: Removing unreachable block (ram,0x05cd1fec) */
/* WARNING: Removing unreachable block (ram,0x05cd2004) */
/* WARNING: Removing unreachable block (ram,0x05cd200c) */
/* WARNING: Removing unreachable block (ram,0x05cd203c) */
/* WARNING: Removing unreachable block (ram,0x05cd2018) */
/* WARNING: Removing unreachable block (ram,0x05cd2024) */
/* WARNING: Removing unreachable block (ram,0x05cd204c) */
/* WARNING: Removing unreachable block (ram,0x05cd2058) */
/* WARNING: Removing unreachable block (ram,0x05cd2144) */
/* WARNING: Removing unreachable block (ram,0x05cd2168) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopySafe(long param_1)

{
  int iVar1;
  ushort uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int *in_x10;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  long lVar11;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  
code_r0x05cd1f3c:
  puVar3 = (undefined8 *)(param_1 + (long)(*in_x10 + 3) * 0x10 + 0x138);
  do {
    (*(code *)*puVar3)(unaff_x23,puVar3[1]);
LAB_05cd1ce0:
    do {
      lVar7 = *unaff_x22;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x28) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_05cd1d2c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_03d8f370();
LAB_05cd1d2c:
      uVar9 = (*(code *)*puVar3)();
      if ((uVar9 & 1) == 0) {
        if (unaff_x22 == (long *)0x0) goto LAB_05cd1fcc;
        lVar7 = *unaff_x22;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 == 0) goto LAB_05cd1fa4;
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_05cd1f8c;
      }
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x120);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03d8f26c(lVar7);
      }
      lVar8 = *unaff_x22;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar7) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_05cd1da4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_03d8f370();
LAB_05cd1da4:
      uVar4 = (*(code *)*puVar3)();
      if (*(long *)(unaff_x20 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548(uVar4,uVar4);
      }
      lVar7 = FUN_05cd0144();
      if (lVar7 != 0) {
        *(undefined4 *)(unaff_x20 + 0x14c) = 0;
        lVar11 = *(long *)(unaff_x20 + 0x78);
        lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf8);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_03d8f26c(lVar8);
        }
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        lVar5 = thunk_FUN_03d2ee44(lVar11,lVar8);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d8e4(lVar11,lVar8);
        }
        lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf8);
        uVar2 = *(ushort *)(lVar8 + 0x135);
        lVar5 = lVar8;
        if ((uVar2 & 1) == 0) {
          lVar5 = FUN_03d8f26c(lVar8);
          lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf8);
          uVar2 = *(ushort *)(lVar8 + 0x135);
        }
        if ((uVar2 & 1) == 0) {
          lVar8 = FUN_03d8f26c(lVar8);
        }
        plVar6 = (long *)thunk_FUN_03d2ee44(lVar11,lVar8);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d8e4(lVar11,lVar8);
        }
        lVar8 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar5) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_05cd1f28;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)FUN_03d8f370(plVar6,lVar5,0);
LAB_05cd1f28:
        (*(code *)*puVar3)(plVar6,lVar7,puVar3[1]);
        goto LAB_05cd1ce0;
      }
      iVar1 = *(int *)(unaff_x20 + 0x14c);
      *(int *)(unaff_x20 + 0x14c) = iVar1 + 1;
    } while (iVar1 != 0);
    unaff_x23 = *(long **)(unaff_x20 + 0x78);
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    param_1 = *unaff_x23;
    uVar9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar9 != 0) {
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(in_x10 + -2) == *unaff_x29) goto code_r0x05cd1f3c;
        uVar9 = uVar9 - 1;
        in_x10 = in_x10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_03d8f370(unaff_x23,*unaff_x29,3);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_05cd1f8c:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_091a14e0) {
      puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_05cd1fc0;
    }
  }
LAB_05cd1fa4:
  puVar3 = (undefined8 *)FUN_03d8f370();
LAB_05cd1fc0:
  (*(code *)*puVar3)();
LAB_05cd1fcc:
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_03d180a8();
  }
  return;
}


