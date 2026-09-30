/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_sessiongroup_updated_t$$Dispose
ENTRY_POINT: 085e4f0c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Vivox_vx_evt_sessiongroup_updated_t__Dispose(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar6;
  long *plVar7;
  long unaff_x21;
  undefined8 *unaff_x22;
  
  FUN_04077588();
  FUN_04077588(PTR_DAT_09332050);
  FUN_04077588(PTR_DAT_09332030);
  *(undefined1 *)(unaff_x21 + 0xf34) = 1;
  lVar1 = thunk_FUN_040b4efc(*unaff_x22);
  FUN_076bca34(lVar1,0);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x10) = unaff_x19;
    thunk_FUN_040ec700();
    if ((*(uint *)(unaff_x19 + 0x88) | 4) == 4) {
      uVar2 = FUN_085e46e0();
      if ((uVar2 & 1) == 0) {
        if ((unaff_x20 == 0) || (*(char *)(unaff_x20 + 0x10) != '\0')) {
          plVar7 = *(long **)(unaff_x19 + 0x98);
          uVar3 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09332038);
          if (plVar7 != (long *)0x0) {
            lVar1 = *plVar7;
            uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
            if (uVar2 != 0) {
              piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
              do {
                if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_09332048) {
                  lVar1 = lVar1 + (long)*piVar5 * 0x10 + 0x138;
                  goto LAB_085e5154;
                }
                uVar2 = uVar2 - 1;
                piVar5 = piVar5 + 4;
              } while (uVar2 != 0);
            }
            lVar1 = FUN_040b1e00(plVar7,*(long *)PTR_DAT_09332048,0);
LAB_085e5154:
            FUN_0567191c(uVar3,plVar7,*(undefined8 *)(lVar1 + 8),0);
            goto LAB_085e5170;
          }
          goto LAB_085e5258;
        }
        if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_085e5258;
        FUN_085e5264();
        plVar7 = *(long **)(unaff_x19 + 0xa8);
        if (plVar7 == (long *)0x0) goto LAB_085e5258;
        lVar4 = *plVar7;
        uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
        lVar1 = *(long *)PTR_DAT_09332040;
        if (uVar2 != 0) {
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == lVar1) goto LAB_085e51e0;
            uVar2 = uVar2 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar2 != 0);
        }
      }
      else {
        if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_085e5258;
        uVar3 = FUN_085f083c();
        puVar6 = (undefined8 *)(lVar1 + 0x18);
        *puVar6 = uVar3;
        thunk_FUN_040ec700(puVar6,uVar3);
        uVar2 = FUN_074e5d94(*puVar6,0);
        if ((uVar2 & 1) == 0) {
          uVar3 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09332038);
          FUN_0567191c(uVar3,lVar1,*(undefined8 *)PTR_DAT_09332050,0);
LAB_085e5170:
          FUN_085e5370();
          return;
        }
        if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_085e5258;
        FUN_085e5264();
        plVar7 = *(long **)(unaff_x19 + 0xa8);
        if (plVar7 == (long *)0x0) goto LAB_085e5258;
        lVar4 = *plVar7;
        uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
        lVar1 = *(long *)PTR_DAT_09332040;
        if (uVar2 != 0) {
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == lVar1) goto LAB_085e51e0;
            uVar2 = uVar2 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar2 != 0);
        }
      }
      puVar6 = (undefined8 *)FUN_040b1e00(plVar7,lVar1,3);
      goto Unity_Services_Vivox_vx_evt_sessiongroup_updated_t__get_sessiongroup_handle;
    }
    if (*(undefined8 **)(unaff_x19 + 0xa8) != (undefined8 *)0x0) {
      FUN_08d5cfb0(**(undefined8 **)(unaff_x19 + 0xa8));
      return;
    }
  }
LAB_085e5258:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
LAB_085e51e0:
  puVar6 = (undefined8 *)(lVar4 + (long)(*piVar5 + 3) * 0x10 + 0x138);
Unity_Services_Vivox_vx_evt_sessiongroup_updated_t__get_sessiongroup_handle:
  uVar3 = (*(code *)*puVar6)(plVar7,puVar6[1]);
  lVar1 = *(long *)(unaff_x19 + 0x10);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),uVar3,*(undefined8 *)(lVar1 + 0x28));
  }
  FUN_085e7994();
  if (*(int *)(*(long *)PTR_DAT_09285b38 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_076f2654(uVar3,0);
  return;
}


