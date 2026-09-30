/*
FUNCTION_NAME: FUN_0811c74c
ENTRY_POINT: 0811c74c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


long FUN_0811c74c(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_09428cae & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08eebd58);
    FUN_03c8f898(PTR_DAT_08e69670);
    FUN_03c8f898(PTR_DAT_08e81f18);
    FUN_03c8f898(PTR_DAT_08e84c28);
    FUN_03c8f898(PTR_DAT_08e82518);
    FUN_03c8f898(PTR_DAT_08e69460);
    FUN_03c8f898(PTR_DAT_08f02640);
    DAT_09428cae = 1;
  }
  puVar2 = PTR_DAT_08e82518;
  plVar5 = (long *)PTR_DAT_08e69460;
  if (param_1 != (long *)0x0) {
    lVar6 = *param_1;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08e82518) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_0811c81c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(param_1,*(long *)PTR_DAT_08e82518,2);
LAB_0811c81c:
    lVar6 = (*(code *)*puVar4)(param_1,puVar4[1]);
    plVar5 = (long *)PTR_DAT_08e69460;
    if (lVar6 != 0) {
      lVar6 = *param_1;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto 
            Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_media_stream_updated_t_sessiongroup_handle_set
            ;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348(param_1,*(long *)puVar2,2);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_media_stream_updated_t_sessiongroup_handle_set
      :
      plVar5 = (long *)(*(code *)*puVar4)(param_1,puVar4[1]);
      if (plVar5 != (long *)0x0) {
        lVar6 = *plVar5;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08e81f18) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_0811c8e4;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)PTR_DAT_08e81f18,0);
LAB_0811c8e4:
        iVar3 = (*(code *)*puVar4)(plVar5,puVar4[1]);
        plVar5 = (long *)PTR_DAT_08e69460;
        if (iVar3 == 0) goto LAB_0811ca8c;
        lVar6 = *param_1;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
              goto LAB_0811c944;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03cf1348(param_1,*(long *)puVar2,2);
LAB_0811c944:
        plVar5 = (long *)(*(code *)*puVar4)(param_1,puVar4[1]);
        if (plVar5 != (long *)0x0) {
          lVar6 = *plVar5;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08e84c28) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_0811c9ac;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)PTR_DAT_08e84c28,0);
LAB_0811c9ac:
          plVar5 = (long *)(*(code *)*puVar4)(plVar5,0,puVar4[1]);
          if (plVar5 != (long *)0x0) {
            lVar6 = *plVar5;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                  puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 6) * 0x10 + 0x138);
                  goto LAB_0811ca14;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar4 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)puVar2,6);
LAB_0811ca14:
            plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
            if (plVar5 != (long *)0x0) {
              bVar1 = *(byte *)(*(long *)PTR_DAT_08eebd58 + 0x130);
              if ((bVar1 <= *(byte *)(*plVar5 + 0x130)) &&
                 (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) ==
                  *(long *)PTR_DAT_08eebd58)) {
                plVar5 = plVar5 + 6;
                goto LAB_0811ca8c;
              }
            }
            if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            FUN_085a437c(*(undefined8 *)PTR_DAT_08f02640,0);
            plVar5 = (long *)PTR_DAT_08e69460;
            goto LAB_0811ca8c;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
  }
LAB_0811ca8c:
  return *plVar5;
}


