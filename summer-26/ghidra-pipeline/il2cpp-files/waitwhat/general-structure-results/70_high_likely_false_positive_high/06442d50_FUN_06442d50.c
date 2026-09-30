/*
FUNCTION_NAME: FUN_06442d50
ENTRY_POINT: 06442d50
PROGRAM: waitwhat-libil2cpp.so
SCORE: 84
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;ray_or_cast_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x064430bc) */
/* WARNING: Removing unreachable block (ram,0x0644329c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long FUN_06442d50(long *param_1,long param_2)

{
  bool bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar12;
  int *piVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  char local_5c [4];
  long *local_58;
  undefined *puVar11;
  
  if ((DAT_075569ce & 1) == 0) {
    FUN_03188a78(PTR_DAT_070ca248);
    FUN_03188a78(FxResources_System_Text_Encodings_Web_SR_var);
    FUN_03188a78(System_Xml_XmlQualifiedName___var);
    FUN_03188a78(System_TimeZoneInfo_AdjustmentRule___var);
    FUN_03188a78(PTR_DAT_070ca2d0);
    FUN_03188a78(UnityEngine_UI_ReflectionMethodsCache_GetRaycastNonAllocCallback_var);
    FUN_03188a78(System_Data_MissingSchemaAction_var);
    FUN_03188a78(PTR_DAT_07109710);
    FUN_03188a78(PTR_DAT_070fd8d8);
    DAT_075569ce = 1;
  }
  puVar11 = PTR_DAT_070c1958;
  local_58 = (long *)0x0;
  local_5c[0] = '\0';
  if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar6 = FUN_05947b18(param_1,0,0);
  if ((uVar6 & 1) == 0) {
    if (param_2 != 0) {
      if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      uVar6 = (**(code **)(*param_1 + 0x8c8))(param_1,param_2,*(undefined8 *)(*param_1 + 0x8d0));
      puVar3 = PTR_DAT_07109710;
      lVar16 = param_2;
      if ((uVar6 & 1) == 0) {
        lVar7 = *(long *)PTR_DAT_07109710;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          lVar7 = *(long *)puVar3;
        }
        plVar14 = *(long **)(*(long *)(lVar7 + 0xb8) + 0x18);
        thunk_FUN_03195150();
        if ((plVar14 != (long *)0x0) &&
           (lVar7 = (**(code **)(*plVar14 + 0x2f8))
                              (plVar14,param_2,*(undefined8 *)(*plVar14 + 0x300)),
           puVar3 = PTR_DAT_070ca2d0, lVar7 != 0)) {
          uVar17 = *(undefined8 *)PTR_DAT_070ca2d0;
          plVar14 = (long *)thunk_FUN_031c3cac(lVar7,uVar17);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03189058(lVar7,uVar17);
          }
          local_5c[0] = '\0';
          local_58 = plVar14;
          FUN_05991f08(plVar14,local_5c,0);
          lVar7 = *plVar14;
          uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar6 != 0) {
            piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_070ca248) {
                puVar8 = (undefined8 *)(lVar7 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                goto LAB_06442f2c;
              }
              uVar6 = uVar6 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar6 != 0);
          }
          puVar8 = (undefined8 *)FUN_031c0d08(plVar14,*(long *)PTR_DAT_070ca248,1);
LAB_06442f2c:
          iVar5 = (*(code *)*puVar8)(plVar14,puVar8[1]);
          puVar4 = PTR_DAT_070fd8d8;
          iVar5 = iVar5 + -1;
          lVar15 = param_2;
          lVar7 = param_2;
          if (-1 < iVar5) {
            do {
              lVar12 = *plVar14;
              lVar7 = *(long *)puVar3;
              uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar6 != 0) {
                piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == lVar7) {
                    puVar8 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_06442f98;
                  }
                  uVar6 = uVar6 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar6 != 0);
              }
              puVar8 = (undefined8 *)FUN_031c0d08(plVar14,lVar7,0);
LAB_06442f98:
              plVar9 = (long *)(*(code *)*puVar8)(plVar14,iVar5,puVar8[1]);
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03188cd8();
              }
              lVar7 = *plVar9;
              bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
              if ((*(byte *)(lVar7 + 0x130) < bVar2) ||
                 (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
                FUN_03189058();
              }
              lVar7 = (**(code **)(lVar7 + 0x198))(plVar9,*(undefined8 *)(lVar7 + 0x1a0));
              if (lVar7 == 0) {
                lVar12 = *plVar14;
                lVar7 = *(long *)puVar3;
                uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar6 != 0) {
                  piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == lVar7) {
                      puVar8 = (undefined8 *)(lVar12 + (long)(*piVar13 + 10) * 0x10 + 0x138);
                      goto LAB_0644305c;
                    }
                    uVar6 = uVar6 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar6 != 0);
                }
                puVar8 = (undefined8 *)FUN_031c0d08(plVar14,lVar7,10);
LAB_0644305c:
                (*(code *)*puVar8)(plVar14,iVar5,puVar8[1]);
                lVar7 = lVar15;
              }
              else {
                uVar6 = (**(code **)(*param_1 + 0x8c8))
                                  (param_1,lVar7,*(undefined8 *)(*param_1 + 0x8d0));
                if ((uVar6 & 1) == 0) {
                  lVar7 = lVar15;
                }
              }
              bVar1 = 0 < iVar5;
              lVar15 = lVar7;
              iVar5 = iVar5 + -1;
            } while (bVar1);
          }
          if (local_5c[0] != '\0') {
            thunk_FUN_03194b00(local_58,0);
          }
          if (lVar7 != param_2) {
            return lVar7;
          }
        }
        puVar3 = FxResources_System_Text_Encodings_Web_SR_var;
        plVar14 = (long *)thunk_FUN_031c3cac(param_2,*(undefined8 *)
                                                      FxResources_System_Text_Encodings_Web_SR_var);
        if (plVar14 != (long *)0x0) {
          lVar7 = *plVar14;
          uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar6 != 0) {
            piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                puVar8 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_06443130;
              }
              uVar6 = uVar6 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar6 != 0);
          }
          puVar8 = (undefined8 *)FUN_031c0d08(plVar14,*(long *)puVar3,0);
LAB_06443130:
          lVar7 = (*(code *)*puVar8)(plVar14,puVar8[1]);
          if ((lVar7 != 0) &&
             (uVar6 = FUN_02d34460(1,*(undefined8 *)System_Data_MissingSchemaAction_var,lVar7),
             (uVar6 & 1) != 0)) {
            uVar17 = *(undefined8 *)System_Xml_XmlQualifiedName___var;
            if (*(int *)(*(long *)(puVar11 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            uVar17 = FUN_0593e698(uVar17,0);
            uVar17 = FUN_02d37580(0,*(undefined8 *)
                                     UnityEngine_UI_ReflectionMethodsCache_GetRaycastNonAllocCallback_var
                                  ,lVar7,uVar17);
            puVar11 = System_TimeZoneInfo_AdjustmentRule___var;
            lVar7 = thunk_FUN_031c3cac(uVar17,*(undefined8 *)
                                               System_TimeZoneInfo_AdjustmentRule___var);
            if (((lVar7 != 0) &&
                (lVar7 = FUN_02d37580(1,*(undefined8 *)puVar11,lVar7,plVar14), lVar7 != 0)) &&
               (uVar6 = (**(code **)(*param_1 + 0x8c8))
                                  (param_1,lVar7,*(undefined8 *)(*param_1 + 0x8d0)), lVar16 = lVar7,
               (uVar6 & 1) == 0)) {
              lVar16 = param_2;
            }
          }
        }
      }
      return lVar16;
    }
    thunk_FUN_031edd38(PTR_DAT_070c2888);
    uVar17 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
    puVar11 = UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputButtonReader_BypassScope_var;
  }
  else {
    thunk_FUN_031edd38(PTR_DAT_070c2888);
    uVar17 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
    puVar11 = PTR_DAT_070cfda0;
  }
  uVar10 = thunk_FUN_031edd38(puVar11);
  FUN_05897880(uVar17,uVar10,0);
  uVar10 = thunk_FUN_031edd38(UnityEngine_XR_Management_XRManagementAnalytics_BuildEvent_var);
                    /* WARNING: Subroutine does not return */
  FUN_03188b9c(uVar17,uVar10);
}


