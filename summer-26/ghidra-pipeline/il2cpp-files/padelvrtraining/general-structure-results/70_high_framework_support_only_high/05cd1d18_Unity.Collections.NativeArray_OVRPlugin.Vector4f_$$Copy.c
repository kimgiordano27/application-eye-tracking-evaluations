/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 05cd1d18
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
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

void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy(void)

{
  int iVar1;
  ushort uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long lVar11;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  
code_r0x05cd1d18:
  puVar3 = (undefined8 *)FUN_03d8f370();
  do {
    uVar4 = (*(code *)*puVar3)();
    if ((uVar4 & 1) == 0) {
      if (unaff_x22 == (long *)0x0) goto LAB_05cd1fcc;
      lVar8 = *unaff_x22;
      uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar4 == 0) goto LAB_05cd1fa4;
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x120);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03d8f26c(lVar8);
    }
    lVar9 = *unaff_x22;
    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar8) {
          puVar3 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_05cd1da4;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_03d8f370();
LAB_05cd1da4:
    uVar5 = (*(code *)*puVar3)();
    if (*(long *)(unaff_x20 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548(uVar5,uVar5);
    }
    lVar8 = FUN_05cd0144();
    if (lVar8 == 0) {
      iVar1 = *(int *)(unaff_x20 + 0x14c);
      *(int *)(unaff_x20 + 0x14c) = iVar1 + 1;
      if (iVar1 == 0) {
        plVar7 = *(long **)(unaff_x20 + 0x78);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        lVar8 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x29) {
              puVar3 = (undefined8 *)(lVar8 + (long)(*piVar10 + 3) * 0x10 + 0x138);
              goto LAB_05cd1f4c;
            }
            uVar4 = uVar4 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined8 *)FUN_03d8f370(plVar7,*unaff_x29,3);
LAB_05cd1f4c:
        (*(code *)*puVar3)(plVar7,puVar3[1]);
      }
    }
    else {
      *(undefined4 *)(unaff_x20 + 0x14c) = 0;
      lVar11 = *(long *)(unaff_x20 + 0x78);
      lVar9 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03d8f26c(lVar9);
      }
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar6 = thunk_FUN_03d2ee44(lVar11,lVar9);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d8e4(lVar11,lVar9);
      }
      lVar9 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf8);
      uVar2 = *(ushort *)(lVar9 + 0x135);
      lVar6 = lVar9;
      if ((uVar2 & 1) == 0) {
        lVar6 = FUN_03d8f26c(lVar9);
        lVar9 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf8);
        uVar2 = *(ushort *)(lVar9 + 0x135);
      }
      if ((uVar2 & 1) == 0) {
        lVar9 = FUN_03d8f26c(lVar9);
      }
      plVar7 = (long *)thunk_FUN_03d2ee44(lVar11,lVar9);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d8e4(lVar11,lVar9);
      }
      lVar9 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar6) {
            puVar3 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_05cd1f28;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_03d8f370(plVar7,lVar6,0);
LAB_05cd1f28:
      (*(code *)*puVar3)(plVar7,lVar8,puVar3[1]);
    }
    lVar8 = *unaff_x22;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 == 0) goto code_r0x05cd1d18;
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    while (*(long *)(piVar10 + -2) != *unaff_x28) {
      uVar4 = uVar4 - 1;
      piVar10 = piVar10 + 4;
      if (uVar4 == 0) goto code_r0x05cd1d18;
    }
    puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar10 = piVar10 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_091a14e0) {
      puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
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


