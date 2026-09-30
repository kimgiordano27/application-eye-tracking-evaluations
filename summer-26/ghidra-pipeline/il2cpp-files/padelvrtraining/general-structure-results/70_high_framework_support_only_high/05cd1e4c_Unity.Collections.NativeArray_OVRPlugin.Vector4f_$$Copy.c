/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 05cd1e4c
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

void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy(void)

{
  int iVar1;
  ushort uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  
  do {
    uVar2 = *(ushort *)(unaff_x27 + 0x135);
    do {
      if ((uVar2 & 1) == 0) {
        unaff_x27 = FUN_03d8f26c(unaff_x27);
      }
      plVar4 = (long *)thunk_FUN_03d2ee44(unaff_x24,unaff_x27);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d8e4(unaff_x24,unaff_x27);
      }
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == unaff_x25) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_05cd1f28;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_03d8f370(plVar4,unaff_x25,0);
LAB_05cd1f28:
      (*(code *)*puVar5)(plVar4,unaff_x23,puVar5[1]);
LAB_05cd1ce0:
      lVar7 = *unaff_x22;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x28) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_05cd1d2c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_03d8f370();
LAB_05cd1d2c:
      uVar8 = (*(code *)*puVar5)();
      if ((uVar8 & 1) == 0) {
        if (unaff_x22 == (long *)0x0) goto LAB_05cd1fcc;
        lVar7 = *unaff_x22;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 == 0) goto LAB_05cd1fa4;
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_05cd1f8c;
      }
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x120);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03d8f26c(lVar7);
      }
      lVar6 = *unaff_x22;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar7) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_05cd1da4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_03d8f370();
LAB_05cd1da4:
      uVar3 = (*(code *)*puVar5)();
      if (*(long *)(unaff_x20 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548(uVar3,uVar3);
      }
      unaff_x23 = FUN_05cd0144();
      if (unaff_x23 == 0) {
        iVar1 = *(int *)(unaff_x20 + 0x14c);
        *(int *)(unaff_x20 + 0x14c) = iVar1 + 1;
        if (iVar1 == 0) {
          plVar4 = *(long **)(unaff_x20 + 0x78);
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d548();
          }
          lVar7 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *unaff_x29) {
                puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 3) * 0x10 + 0x138);
                goto LAB_05cd1f4c;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar5 = (undefined8 *)FUN_03d8f370(plVar4,*unaff_x29,3);
LAB_05cd1f4c:
          (*(code *)*puVar5)(plVar4,puVar5[1]);
        }
        goto LAB_05cd1ce0;
      }
      *(undefined4 *)(unaff_x20 + 0x14c) = 0;
      unaff_x24 = *(long *)(unaff_x20 + 0x78);
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03d8f26c(lVar7);
      }
      if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar6 = thunk_FUN_03d2ee44(unaff_x24,lVar7);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d8e4(unaff_x24,lVar7);
      }
      unaff_x25 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf8);
      uVar2 = *(ushort *)(unaff_x25 + 0x135);
      unaff_x27 = unaff_x25;
    } while ((uVar2 & 1) != 0);
    unaff_x25 = FUN_03d8f26c(unaff_x25);
    unaff_x27 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf8);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_05cd1f8c:
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_091a14e0) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_05cd1fc0;
    }
  }
LAB_05cd1fa4:
  puVar5 = (undefined8 *)FUN_03d8f370();
LAB_05cd1fc0:
  (*(code *)*puVar5)();
LAB_05cd1fcc:
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_03d180a8();
  }
  return;
}


