/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 03cb8274
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03cb8698) */
/* WARNING: Removing unreachable block (ram,0x03cb86e0) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy(void)

{
  int iVar1;
  undefined *puVar2;
  bool in_CY;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  
  if (!in_CY) {
    FUN_050f6388(0);
  }
  lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    FUN_02f41e9c(lVar6);
  }
  plVar4 = (long *)thunk_FUN_02f45174();
  if (plVar4 == (long *)0x0) {
    if (unaff_w21 < (int)unaff_x19[3]) {
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02f41e9c(lVar6);
      }
      lVar7 = *unaff_x22;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03cb84d4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_02f421d0();
LAB_03cb84d4:
      plVar4 = (long *)(*(code *)*puVar5)();
      puVar2 = PTR_DAT_067c91b8;
      do {
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar6 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_03cb8548;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_02f421d0(plVar4,*(long *)puVar2,0);
LAB_03cb8548:
        uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar9 & 1) == 0) {
          if (plVar4 == (long *)0x0) goto LAB_03cb86b4;
          lVar6 = *plVar4;
          uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar9 == 0) goto LAB_03cb8664;
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto Unity_Collections_NativeArray<OVRPlugin_Vector4f>__AsReadOnly;
        }
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02f41e9c(lVar6);
        }
        lVar7 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar6) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_03cb85cc;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_02f421d0(plVar4,lVar6,0);
LAB_03cb85cc:
        (*(code *)*puVar5)(plVar4,puVar5[1]);
        FUN_03cb7fa4();
      } while( true );
    }
    FUN_03cb8fd0();
  }
  else {
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02f41e9c(lVar6);
    }
    lVar7 = *plVar4;
                    /* try { // try from 03cb82dc to 03db82df has its CatchHandler @ 03cb82ec */
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    /* try { // try from 03cb82e0 to 03db8317 has its CatchHandler @ 03cb7e14 */
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
                    /* catch(type#1 @ 06402238) { ... } // from try @ 03cb82dc with catch @ 03cb82ec
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 03cb81fc with catch @ 03cb82f0
                        */
        if (*(long *)(piVar10 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03cb8390;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_02f421d0(plVar4,lVar6,0);
LAB_03cb8390:
    iVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (0 < iVar3) {
      FUN_03cb7778();
      iVar1 = (int)unaff_x19[3] - unaff_w21;
      if (iVar1 != 0 && unaff_w21 <= (int)unaff_x19[3]) {
        FUN_050f7d68(unaff_x19[2],unaff_w21,unaff_x19[2],iVar3 + unaff_w21,iVar1,0);
      }
      lVar6 = unaff_x19[2];
      if (plVar4 == unaff_x19) {
        FUN_050f7d68(lVar6,0,lVar6,unaff_w21,unaff_w21,0);
        FUN_050f7d68(unaff_x19[2],iVar3 + unaff_w21,unaff_x19[2],unaff_w21 << 1,
                     (int)unaff_x19[3] - unaff_w21,0);
      }
      else {
        lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_02f41e9c(lVar7);
        }
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar7) {
              puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
              goto LAB_03cb84a4;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_02f421d0(plVar4,lVar7,5);
LAB_03cb84a4:
        (*(code *)*puVar5)(plVar4,lVar6,unaff_w21,puVar5[1]);
      }
      *(int *)(unaff_x19 + 3) = (int)unaff_x19[3] + iVar3;
    }
  }
LAB_03cb86b4:
  *(int *)((long)unaff_x19 + 0x1c) = *(int *)((long)unaff_x19 + 0x1c) + 1;
  return;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
Unity_Collections_NativeArray<OVRPlugin_Vector4f>__AsReadOnly:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar5 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03cb8680;
    }
  }
LAB_03cb8664:
  puVar5 = (undefined8 *)FUN_02f421d0(plVar4,*(long *)PTR_DAT_067c91b0,0);
LAB_03cb8680:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  goto LAB_03cb86b4;
}


