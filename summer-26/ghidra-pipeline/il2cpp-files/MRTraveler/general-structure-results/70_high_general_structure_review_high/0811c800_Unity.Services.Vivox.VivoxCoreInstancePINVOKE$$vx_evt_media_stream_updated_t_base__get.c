/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_media_stream_updated_t_base__get
ENTRY_POINT: 0811c800
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


long Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_media_stream_updated_t_base__get(void)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long *unaff_x21;
  
  puVar3 = (undefined8 *)FUN_03cf1348();
  lVar4 = (*(code *)*puVar3)();
  plVar5 = (long *)PTR_DAT_08e69460;
  if (lVar4 == 0) {
LAB_0811ca8c:
    return *plVar5;
  }
  lVar4 = *unaff_x19;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x21) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 2) * 0x10 + 0x138);
        goto 
        Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_media_stream_updated_t_sessiongroup_handle_set
        ;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_03cf1348();
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_media_stream_updated_t_sessiongroup_handle_set
  :
  plVar5 = (long *)(*(code *)*puVar3)();
  if (plVar5 != (long *)0x0) {
    lVar4 = *plVar5;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08e81f18) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0811c8e4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)PTR_DAT_08e81f18,0);
LAB_0811c8e4:
    iVar2 = (*(code *)*puVar3)(plVar5,puVar3[1]);
    plVar5 = (long *)PTR_DAT_08e69460;
    if (iVar2 == 0) goto LAB_0811ca8c;
    lVar4 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x21) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_0811c944;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348();
LAB_0811c944:
    plVar5 = (long *)(*(code *)*puVar3)();
    if (plVar5 != (long *)0x0) {
      lVar4 = *plVar5;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08e84c28) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0811c9ac;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)PTR_DAT_08e84c28,0);
LAB_0811c9ac:
      plVar5 = (long *)(*(code *)*puVar3)(plVar5,0,puVar3[1]);
      if (plVar5 != (long *)0x0) {
        lVar4 = *plVar5;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x21) {
              puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 6) * 0x10 + 0x138);
              goto LAB_0811ca14;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_03cf1348(plVar5,*unaff_x21,6);
LAB_0811ca14:
        plVar5 = (long *)(*(code *)*puVar3)(plVar5,puVar3[1]);
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


