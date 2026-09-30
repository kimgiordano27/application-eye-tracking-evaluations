/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 05cd1de8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
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

void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy(long param_1)

{
  int iVar1;
  ushort uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long unaff_x23;
  long lVar9;
  long lVar10;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  
  do {
    lVar9 = *(long *)(unaff_x20 + 0x78);
    lVar10 = *(long *)(*(long *)(param_1 + 0xc0) + 0xf8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_03d8f26c(lVar10);
    }
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar4 = thunk_FUN_03d2ee44(lVar9,lVar10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d8e4(lVar9,lVar10);
    }
    lVar10 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf8);
    uVar2 = *(ushort *)(lVar10 + 0x135);
    lVar4 = lVar10;
    if ((uVar2 & 1) == 0) {
      lVar4 = FUN_03d8f26c(lVar10);
      lVar10 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf8);
      uVar2 = *(ushort *)(lVar10 + 0x135);
    }
    if ((uVar2 & 1) == 0) {
      lVar10 = FUN_03d8f26c(lVar10);
    }
    plVar5 = (long *)thunk_FUN_03d2ee44(lVar9,lVar10);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d8e4(lVar9,lVar10);
    }
    lVar10 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar4) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05cd1f28;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_03d8f370(plVar5,lVar4,0);
LAB_05cd1f28:
    (*(code *)*puVar6)(plVar5,unaff_x23,puVar6[1]);
LAB_05cd1ce0:
    lVar10 = *unaff_x22;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x28) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05cd1d2c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_03d8f370();
LAB_05cd1d2c:
    uVar7 = (*(code *)*puVar6)();
    if ((uVar7 & 1) == 0) {
      if (unaff_x22 == (long *)0x0) goto LAB_05cd1fcc;
      lVar10 = *unaff_x22;
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 == 0) goto LAB_05cd1fa4;
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    lVar10 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x120);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_03d8f26c(lVar10);
    }
    lVar9 = *unaff_x22;
    uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar10) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05cd1da4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_03d8f370();
LAB_05cd1da4:
    uVar3 = (*(code *)*puVar6)();
    if (*(long *)(unaff_x20 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548(uVar3,uVar3);
    }
    unaff_x23 = FUN_05cd0144();
    if (unaff_x23 == 0) {
      iVar1 = *(int *)(unaff_x20 + 0x14c);
      *(int *)(unaff_x20 + 0x14c) = iVar1 + 1;
      if (iVar1 == 0) {
        plVar5 = *(long **)(unaff_x20 + 0x78);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        lVar10 = *plVar5;
        uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x29) {
              puVar6 = (undefined8 *)(lVar10 + (long)(*piVar8 + 3) * 0x10 + 0x138);
              goto LAB_05cd1f4c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)FUN_03d8f370(plVar5,*unaff_x29,3);
LAB_05cd1f4c:
        (*(code *)*puVar6)(plVar5,puVar6[1]);
      }
      goto LAB_05cd1ce0;
    }
    *(undefined4 *)(unaff_x20 + 0x14c) = 0;
    param_1 = *(long *)(unaff_x19 + 0x20);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_091a14e0) {
      puVar6 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_05cd1fc0;
    }
  }
LAB_05cd1fa4:
  puVar6 = (undefined8 *)FUN_03d8f370();
LAB_05cd1fc0:
  (*(code *)*puVar6)();
LAB_05cd1fcc:
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_03d180a8();
  }
  return;
}


