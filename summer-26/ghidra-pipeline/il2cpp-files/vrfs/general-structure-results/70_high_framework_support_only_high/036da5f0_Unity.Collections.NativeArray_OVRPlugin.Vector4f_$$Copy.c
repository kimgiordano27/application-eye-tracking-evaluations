/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 036da5f0
PROGRAM: vrfs-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy(void)

{
  long lVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w22;
  long *plVar15;
  uint uStack000000000000000c;
  
  *(undefined1 *)(unaff_x20 + 0x92a) = 1;
  if ((unaff_x19 != (long *)0x0) &&
     (lVar9 = (**(code **)(*unaff_x19 + 0x238))(), puVar5 = PTR_DAT_06e5dc58,
     puVar3 = PTR_DAT_06d98c30, lVar9 != 0)) {
    iVar6 = FUN_03f054bc(lVar9,0);
    puVar4 = PTR_DAT_06dc8bb8;
    plVar10 = unaff_x19;
    if (iVar6 < 1) {
LAB_036da8e4:
      lVar9 = (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
      if (lVar9 != 0) {
        iVar6 = FUN_03f054bc(lVar9,0);
        if (iVar6 == 0) {
          lVar9 = *(long *)puVar5;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_016466fc();
            lVar9 = *(long *)puVar5;
          }
          plVar10 = (long *)**(long **)(lVar9 + 0xb8);
        }
        else if ((unaff_w22 & 1) == 0) {
          lVar9 = (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
          if (lVar9 == 0) goto LAB_036da8d8;
          iVar6 = FUN_03f054bc(lVar9,0);
          if (iVar6 == 1) {
            lVar13 = *(long *)puVar3;
            lVar9 = plVar10[10];
            lVar1 = plVar10[0xb];
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_016466fc();
              lVar13 = *(long *)puVar3;
            }
            uVar14 = FUN_0371033c(lVar9,lVar1,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x10),
                                  *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x18),0);
            if ((uVar14 & 1) != 0) {
              lVar13 = *(long *)puVar3;
              lVar9 = plVar10[0xc];
              lVar1 = plVar10[0xd];
              if (*(int *)(lVar13 + 0xe0) == 0) {
                thunk_FUN_016466fc();
                lVar13 = *(long *)puVar3;
              }
              uVar14 = FUN_0371033c(lVar9,lVar1,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x10),
                                    *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x18),0);
              if ((uVar14 & 1) != 0) {
                plVar10 = (long *)(**(code **)(*plVar10 + 0x238))
                                            (plVar10,*(undefined8 *)(*plVar10 + 0x240));
                if (plVar10 == (long *)0x0) goto LAB_036da8d8;
                plVar10 = (long *)(**(code **)(*plVar10 + 0x308))
                                            (plVar10,0,*(undefined8 *)(*plVar10 + 0x310));
                if (plVar10 != (long *)0x0) {
                  bVar2 = *(byte *)(*(long *)puVar5 + 300);
                  if ((*(byte *)(*plVar10 + 300) < bVar2) ||
                     (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar2 * 8 + -8) !=
                      *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
                    FUN_0160f170(plVar10);
                  }
                }
              }
            }
          }
        }
        return plVar10;
      }
    }
    else {
      uStack000000000000000c = unaff_w22;
      plVar10 = (long *)thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06dc8bb8);
      if (plVar10 != (long *)0x0) {
        FUN_03fbc544(plVar10,0);
        FUN_03fbbd88(plVar10,unaff_x19[10],unaff_x19[0xb],0);
        uVar11 = FUN_03fbbec4(plVar10,unaff_x19[0xc],unaff_x19[0xd],0);
        FUN_036dac4c(uVar11,plVar10);
        lVar9 = (**(code **)(*unaff_x19 + 0x238))();
        if (lVar9 != 0) {
          iVar6 = 0;
          do {
            iVar7 = FUN_03f054bc(lVar9,0);
            unaff_w22 = uStack000000000000000c;
            if (iVar7 <= iVar6) goto LAB_036da8e4;
            plVar12 = (long *)(**(code **)(*unaff_x19 + 0x238))();
            if (plVar12 == (long *)0x0) break;
            plVar12 = (long *)(**(code **)(*plVar12 + 0x308))
                                        (plVar12,iVar6,*(undefined8 *)(*plVar12 + 0x310));
            if (plVar12 != (long *)0x0) {
              bVar2 = *(byte *)(*(long *)puVar5 + 300);
              if ((*(byte *)(*plVar12 + 300) < bVar2) ||
                 (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar5))
              {
                    /* WARNING: Subroutine does not return */
                FUN_0160f170(plVar12);
              }
            }
            plVar12 = (long *)FUN_036d4778();
            lVar9 = *(long *)puVar5;
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_016466fc(lVar9);
              lVar9 = *(long *)puVar5;
            }
            if (plVar12 != (long *)**(long **)(lVar9 + 0xb8)) {
              if (plVar12 == (long *)0x0) break;
              bVar2 = *(byte *)(*(long *)puVar4 + 300);
              if (*(byte *)(*plVar12 + 300) < bVar2) {
                plVar15 = (long *)0x0;
              }
              else {
                plVar15 = plVar12;
                if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)
                {
                  plVar15 = (long *)0x0;
                }
              }
              lVar13 = *(long *)puVar3;
              lVar9 = plVar12[10];
              lVar1 = plVar12[0xb];
              if (*(int *)(lVar13 + 0xe0) == 0) {
                thunk_FUN_016466fc();
                lVar13 = *(long *)puVar3;
              }
              uVar14 = FUN_0371033c(lVar9,lVar1,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x10),
                                    *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x18),0);
              if ((uVar14 & 1) != 0) {
                lVar13 = *(long *)puVar3;
                lVar9 = plVar12[0xc];
                lVar1 = plVar12[0xd];
                if (*(int *)(lVar13 + 0xe0) == 0) {
                  thunk_FUN_016466fc();
                  lVar13 = *(long *)puVar3;
                }
                uVar14 = FUN_0371033c(lVar9,lVar1,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x10),
                                      *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x18),0);
                if ((plVar15 != (long *)0x0) && ((uVar14 & 1) != 0)) {
                  lVar9 = (**(code **)(*plVar15 + 0x238))(plVar15,*(undefined8 *)(*plVar15 + 0x240))
                  ;
                  if (lVar9 != 0) {
                    iVar7 = 0;
                    while (iVar8 = FUN_03f054bc(lVar9,0), iVar7 < iVar8) {
                      lVar9 = (**(code **)(*plVar10 + 0x238))
                                        (plVar10,*(undefined8 *)(*plVar10 + 0x240));
                      plVar12 = (long *)(**(code **)(*plVar15 + 0x238))
                                                  (plVar15,*(undefined8 *)(*plVar15 + 0x240));
                      if ((plVar12 == (long *)0x0) ||
                         (uVar11 = (**(code **)(*plVar12 + 0x308))
                                             (plVar12,iVar7,*(undefined8 *)(*plVar12 + 0x310)),
                         lVar9 == 0)) goto LAB_036da8d8;
                      FUN_036ef950(lVar9,uVar11,0);
                      iVar7 = iVar7 + 1;
                      lVar9 = (**(code **)(*plVar15 + 0x238))
                                        (plVar15,*(undefined8 *)(*plVar15 + 0x240));
                      if (lVar9 == 0) goto LAB_036da8d8;
                    }
                    goto LAB_036da8bc;
                  }
                  break;
                }
              }
              lVar9 = (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
              if (lVar9 == 0) break;
              FUN_036ef950(lVar9,plVar12,0);
            }
LAB_036da8bc:
            iVar6 = iVar6 + 1;
            lVar9 = (**(code **)(*unaff_x19 + 0x238))();
          } while (lVar9 != 0);
        }
      }
    }
  }
LAB_036da8d8:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


