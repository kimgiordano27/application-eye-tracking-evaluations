/*
FUNCTION_NAME: FUN_087a39f8
ENTRY_POINT: 087a39f8
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_15;ray_or_cast_sink_hits_6;telemetry_or_network_hits_1
*/


void FUN_087a39f8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  int local_58 [6];
  
  if ((DAT_0955bc61 & 1) == 0) {
    FUN_0403162c(PTR_DAT_09014740);
    FUN_0403162c(PTR_DAT_09014748);
    FUN_0403162c(PTR_DAT_09014750);
    FUN_0403162c(PTR_DAT_09014758);
    FUN_0403162c(PTR_DAT_09014760);
    FUN_0403162c(PTR_DAT_09014768);
    DAT_0955bc61 = 1;
  }
  puVar4 = PTR_DAT_09014760;
  puVar3 = PTR_DAT_09014758;
  puVar2 = PTR_DAT_09014750;
  puVar1 = PTR_DAT_09014740;
  if (param_2 != 0) {
    do {
      do {
        FUN_087a3c5c(local_58,param_2);
        if (local_58[0] < 0xf) {
          if (local_58[0] == 1) goto LAB_087a3ad4;
          if (local_58[0] != 0xe) goto LAB_087a3b7c;
          uVar7 = UnityEngine_Analytics_SubsystemsAnalyticBase___ctor(param_1,param_2);
        }
        else {
          if (local_58[0] != 0x12) {
            if ((local_58[0] != 0x14) && (local_58[0] != 0xf)) {
LAB_087a3b7c:
              uVar7 = thunk_FUN_04097b88(PTR_DAT_09014770);
              uVar7 = thunk_FUN_0406db0c(uVar7,local_58);
              uVar9 = thunk_FUN_04097b88(PTR_DAT_09014778);
              uVar7 = FUN_0735fe18(uVar9,uVar7,0);
              thunk_FUN_04097b88(PTR_DAT_08f65af8);
              uVar9 = thunk_FUN_0406deb8();
              FUN_0751c708(uVar9,uVar7,0);
              uVar7 = thunk_FUN_04097b88(PTR_DAT_09014780);
                    /* WARNING: Subroutine does not return */
              FUN_04031750(uVar9,uVar7);
            }
            goto LAB_087a3c04;
          }
LAB_087a3ad4:
          uVar7 = FUN_087a3d08(param_1,param_2);
        }
        if (*(long *)(param_1 + 0x18) == 0)
        goto UnityEngine_EventSystems_RaycastResult__set_gameObject;
        uVar7 = FUN_06063f64(*(long *)(param_1 + 0x18),uVar7,*(undefined8 *)puVar4);
        iVar5 = FUN_087a40a4(uVar7,param_2);
      } while (iVar5 == 0);
      lVar8 = *(long *)(param_1 + 0x20);
      if (lVar8 == 0) break;
      if (0 < *(int *)(lVar8 + 0x18)) {
        do {
          iVar6 = FUN_06062da4(lVar8,*(undefined8 *)puVar1);
          while( true ) {
            if ((iVar6 <= iVar5) || (iVar6 == 5)) goto LAB_087a3b54;
            FUN_087a41e4(param_1);
            lVar8 = *(long *)(param_1 + 0x20);
            if (lVar8 == 0) goto UnityEngine_EventSystems_RaycastResult__set_gameObject;
            if (0 < *(int *)(lVar8 + 0x18)) break;
            iVar6 = 0;
          }
        } while( true );
      }
LAB_087a3b54:
      if (*(long *)(param_1 + 0x20) == 0) break;
      FUN_06062e88(*(long *)(param_1 + 0x20),iVar5,*(undefined8 *)puVar3);
    } while( true );
  }
UnityEngine_EventSystems_RaycastResult__set_gameObject:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
LAB_087a3c04:
  lVar8 = *(long *)(param_1 + 0x20);
  if (lVar8 == 0) goto UnityEngine_EventSystems_RaycastResult__set_gameObject;
  if (*(int *)(lVar8 + 0x18) < 1) {
LAB_087a3c34:
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_06063eb8(*(long *)(param_1 + 0x18),*(undefined8 *)puVar2);
      return;
    }
    goto UnityEngine_EventSystems_RaycastResult__set_gameObject;
  }
  iVar5 = FUN_06062da4(lVar8,*(undefined8 *)puVar1);
  if (iVar5 == 5) {
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_06062de8(*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_09014748);
      goto LAB_087a3c34;
    }
    goto UnityEngine_EventSystems_RaycastResult__set_gameObject;
  }
  FUN_087a41e4(param_1);
  goto LAB_087a3c04;
}


