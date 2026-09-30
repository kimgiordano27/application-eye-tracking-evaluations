/*
FUNCTION_NAME: FUN_01bdfcb4
ENTRY_POINT: 01bdfcb4
PROGRAM: vrfs-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_01bdfcb4(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long *plVar8;
  
  if ((DAT_0722bda5 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e1a278);
    thunk_FUN_0159f088(PTR_DAT_06de4d50);
    DAT_0722bda5 = 1;
  }
  puVar2 = PTR_DAT_06e1a278;
  puVar1 = PTR_DAT_06de4d50;
  lVar3 = *param_1;
  if (lVar3 == 0) goto LAB_01be20c4;
  plVar8 = *(long **)(lVar3 + 0x48);
  if (plVar8 != (long *)0x0) {
    lVar7 = *(long *)(lVar3 + 0x50);
    lVar3 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e1a278);
    if (lVar3 == 0) goto LAB_01be20c4;
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          lVar4 = lVar4 + (long)*piVar6 * 0x10 + 0x138;
          goto LAB_01bdfd78;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar4 = FUN_015c2a80(plVar8,*(long *)puVar1,0);
LAB_01bdfd78:
    FUN_04839fa4(lVar3,plVar8,*(undefined8 *)(lVar4 + 8),0);
    if (lVar7 == 0) goto LAB_01be20c4;
    FUN_02500140(lVar7,lVar3,0);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_01be20c4;
    plVar8 = *(long **)(lVar3 + 0x48);
    lVar3 = *(long *)(lVar3 + 0x50);
    lVar7 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
    if ((lVar7 == 0) || (plVar8 == (long *)0x0)) goto LAB_01be20c4;
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          lVar4 = lVar4 + (long)*piVar6 * 0x10 + 0x138;
          goto LAB_01bdfe0c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar4 = FUN_015c2a80(plVar8,*(long *)puVar1,0);
LAB_01bdfe0c:
    FUN_04839fa4(lVar7,plVar8,*(undefined8 *)(lVar4 + 8),0);
    if (lVar3 == 0) goto LAB_01be20c4;
    FUN_025002a0(lVar3,lVar7,0);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_01be20c4;
    plVar8 = *(long **)(lVar3 + 0x48);
    lVar3 = *(long *)(lVar3 + 0x50);
    lVar7 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
    if ((lVar7 == 0) || (plVar8 == (long *)0x0)) goto LAB_01be20c4;
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          lVar4 = lVar4 + (long)*piVar6 * 0x10 + 0x138;
          goto LAB_01bdfea0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar4 = FUN_015c2a80(plVar8,*(long *)puVar1,0);
LAB_01bdfea0:
    FUN_04839fa4(lVar7,plVar8,*(undefined8 *)(lVar4 + 8),0);
    if (lVar3 == 0) goto LAB_01be20c4;
    FUN_025001f0(lVar3,lVar7,0);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_01be20c4;
    lVar7 = *(long *)(lVar3 + 0x58);
    plVar8 = *(long **)(lVar3 + 0x48);
    lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
    if ((lVar3 == 0) || (plVar8 == (long *)0x0)) goto LAB_01be20c4;
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          lVar4 = lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138;
          goto LAB_01bdff3c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar4 = FUN_015c2a80(plVar8,*(long *)puVar1,1);
LAB_01bdff3c:
    FUN_04839fa4(lVar3,plVar8,*(undefined8 *)(lVar4 + 8),0);
    if (lVar7 == 0) goto LAB_01be20c4;
    FUN_02500140(lVar7,lVar3,0);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_01be20c4;
    lVar7 = *(long *)(lVar3 + 0x58);
    plVar8 = *(long **)(lVar3 + 0x48);
    lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
    if ((lVar3 == 0) || (plVar8 == (long *)0x0)) goto LAB_01be20c4;
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          lVar4 = lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138;
          goto LAB_01bdffd8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar4 = FUN_015c2a80(plVar8,*(long *)puVar1,1);
LAB_01bdffd8:
    FUN_04839fa4(lVar3,plVar8,*(undefined8 *)(lVar4 + 8),0);
    if (lVar7 == 0) goto LAB_01be20c4;
    FUN_025002a0(lVar7,lVar3,0);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_01be20c4;
    lVar7 = *(long *)(lVar3 + 0x58);
    plVar8 = *(long **)(lVar3 + 0x48);
    lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
    if ((lVar3 == 0) || (plVar8 == (long *)0x0)) goto LAB_01be20c4;
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          lVar4 = lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138;
          goto LAB_01be0074;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar4 = FUN_015c2a80(plVar8,*(long *)puVar1,1);
LAB_01be0074:
    FUN_04839fa4(lVar3,plVar8,*(undefined8 *)(lVar4 + 8),0);
    if (lVar7 == 0) goto LAB_01be20c4;
    FUN_025001f0(lVar7,lVar3,0);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_01be20c4;
    lVar7 = *(long *)(lVar3 + 0x60);
    plVar8 = *(long **)(lVar3 + 0x48);
    lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
    if ((lVar3 == 0) || (plVar8 == (long *)0x0)) goto LAB_01be20c4;
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          lVar4 = lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138;
          goto LAB_01be0110;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar4 = FUN_015c2a80(plVar8,*(long *)puVar1,2);
LAB_01be0110:
    FUN_04839fa4(lVar3,plVar8,*(undefined8 *)(lVar4 + 8),0);
    if (lVar7 == 0) goto LAB_01be20c4;
    FUN_02500140(lVar7,lVar3,0);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_01be20c4;
    lVar7 = *(long *)(lVar3 + 0x60);
    plVar8 = *(long **)(lVar3 + 0x48);
    lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
    if ((lVar3 == 0) || (plVar8 == (long *)0x0)) goto LAB_01be20c4;
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          lVar4 = lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138;
          goto LAB_01be01ac;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar4 = FUN_015c2a80(plVar8,*(long *)puVar1,2);
LAB_01be01ac:
    FUN_04839fa4(lVar3,plVar8,*(undefined8 *)(lVar4 + 8),0);
    if (lVar7 == 0) goto LAB_01be20c4;
    FUN_025002a0(lVar7,lVar3,0);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_01be20c4;
    lVar7 = *(long *)(lVar3 + 0x60);
    plVar8 = *(long **)(lVar3 + 0x48);
    lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
    if ((lVar3 == 0) || (plVar8 == (long *)0x0)) goto LAB_01be20c4;
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          lVar4 = lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138;
          goto LAB_01be0248;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar4 = FUN_015c2a80(plVar8,*(long *)puVar1,2);
LAB_01be0248:
    FUN_04839fa4(lVar3,plVar8,*(undefined8 *)(lVar4 + 8),0);
    if (lVar7 == 0) goto LAB_01be20c4;
    FUN_025001f0(lVar7,lVar3,0);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_01be20c4;
    lVar7 = *(long *)(lVar3 + 0x68);
    plVar8 = *(long **)(lVar3 + 0x48);
    lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
    if ((lVar3 == 0) || (plVar8 == (long *)0x0)) goto LAB_01be20c4;
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          lVar4 = lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138;
          goto LAB_01be02e4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar4 = FUN_015c2a80(plVar8,*(long *)puVar1,3);
LAB_01be02e4:
    FUN_04839fa4(lVar3,plVar8,*(undefined8 *)(lVar4 + 8),0);
    if (lVar7 == 0) goto LAB_01be20c4;
    FUN_02500140(lVar7,lVar3,0);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_01be20c4;
    lVar7 = *(long *)(lVar3 + 0x68);
    plVar8 = *(long **)(lVar3 + 0x48);
    lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
    if ((lVar3 == 0) || (plVar8 == (long *)0x0)) goto LAB_01be20c4;
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          lVar4 = lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138;
          goto LAB_01be0380;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar4 = FUN_015c2a80(plVar8,*(long *)puVar1,3);
LAB_01be0380:
    FUN_04839fa4(lVar3,plVar8,*(undefined8 *)(lVar4 + 8),0);
    if (lVar7 == 0) goto LAB_01be20c4;
    FUN_025002a0(lVar7,lVar3,0);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_01be20c4;
    lVar7 = *(long *)(lVar3 + 0x68);
    plVar8 = *(long **)(lVar3 + 0x48);
    lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
    if ((lVar3 == 0) || (plVar8 == (long *)0x0)) goto LAB_01be20c4;
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          lVar4 = lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138;
          goto LAB_01be041c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar4 = FUN_015c2a80(plVar8,*(long *)puVar1,3);
LAB_01be041c:
    FUN_04839fa4(lVar3,plVar8,*(undefined8 *)(lVar4 + 8),0);
    if (lVar7 == 0) goto LAB_01be20c4;
    FUN_025001f0(lVar7,lVar3,0);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_01be20c4;
    lVar7 = *(long *)(lVar3 + 0x70);
    plVar8 = *(long **)(lVar3 + 0x48);
    lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
    if ((lVar3 == 0) || (plVar8 == (long *)0x0)) goto LAB_01be20c4;
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          lVar4 = lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138;
          goto LAB_01be04b8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar4 = FUN_015c2a80(plVar8,*(long *)puVar1,4);
LAB_01be04b8:
    FUN_04839fa4(lVar3,plVar8,*(undefined8 *)(lVar4 + 8),0);
    if (lVar7 == 0) goto LAB_01be20c4;
    FUN_02500140(lVar7,lVar3,0);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_01be20c4;
    lVar7 = *(long *)(lVar3 + 0x70);
    plVar8 = *(long **)(lVar3 + 0x48);
    lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
    if ((lVar3 == 0) || (plVar8 == (long *)0x0)) goto LAB_01be20c4;
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          lVar4 = lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138;
          goto LAB_01be0554;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar4 = FUN_015c2a80(plVar8,*(long *)puVar1,4);
LAB_01be0554:
    FUN_04839fa4(lVar3,plVar8,*(undefined8 *)(lVar4 + 8),0);
    if (lVar7 == 0) goto LAB_01be20c4;
    FUN_025002a0(lVar7,lVar3,0);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_01be20c4;
    lVar7 = *(long *)(lVar3 + 0x70);
    plVar8 = *(long **)(lVar3 + 0x48);
    lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
    if ((lVar3 == 0) || (plVar8 == (long *)0x0)) goto LAB_01be20c4;
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          lVar4 = lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138;
          goto LAB_01be05f0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar4 = FUN_015c2a80(plVar8,*(long *)puVar1,4);
LAB_01be05f0:
    FUN_04839fa4(lVar3,plVar8,*(undefined8 *)(lVar4 + 8),0);
    if (lVar7 == 0) goto LAB_01be20c4;
    FUN_025001f0(lVar7,lVar3,0);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_01be20c4;
    lVar7 = *(long *)(lVar3 + 0x78);
    plVar8 = *(long **)(lVar3 + 0x48);
    lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
    if ((lVar3 == 0) || (plVar8 == (long *)0x0)) goto LAB_01be20c4;
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          lVar4 = lVar4 + (long)(*piVar6 + 5) * 0x10 + 0x138;
          goto LAB_01be068c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar4 = FUN_015c2a80(plVar8,*(long *)puVar1,5);
LAB_01be068c:
    FUN_04839fa4(lVar3,plVar8,*(undefined8 *)(lVar4 + 8),0);
    if (lVar7 == 0) goto LAB_01be20c4;
    FUN_02500140(lVar7,lVar3,0);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_01be20c4;
    lVar7 = *(long *)(lVar3 + 0x78);
    plVar8 = *(long **)(lVar3 + 0x48);
    lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
    if ((lVar3 == 0) || (plVar8 == (long *)0x0)) goto LAB_01be20c4;
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          lVar4 = lVar4 + (long)(*piVar6 + 5) * 0x10 + 0x138;
          goto LAB_01be0728;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar4 = FUN_015c2a80(plVar8,*(long *)puVar1,5);
LAB_01be0728:
    FUN_04839fa4(lVar3,plVar8,*(undefined8 *)(lVar4 + 8),0);
    if (lVar7 == 0) goto LAB_01be20c4;
    FUN_025002a0(lVar7,lVar3,0);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_01be20c4;
    lVar7 = *(long *)(lVar3 + 0x78);
    plVar8 = *(long **)(lVar3 + 0x48);
    lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
    if ((lVar3 == 0) || (plVar8 == (long *)0x0)) goto LAB_01be20c4;
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          lVar4 = lVar4 + (long)(*piVar6 + 5) * 0x10 + 0x138;
          goto LAB_01be07c4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar4 = FUN_015c2a80(plVar8,*(long *)puVar1,5);
LAB_01be07c4:
    FUN_04839fa4(lVar3,plVar8,*(undefined8 *)(lVar4 + 8),0);
    if (lVar7 == 0) goto LAB_01be20c4;
    FUN_025001f0(lVar7,lVar3,0);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_01be20c4;
    lVar7 = *(long *)(lVar3 + 0x80);
    plVar8 = *(long **)(lVar3 + 0x48);
    lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
    if ((lVar3 == 0) || (plVar8 == (long *)0x0)) goto LAB_01be20c4;
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          lVar4 = lVar4 + (long)(*piVar6 + 6) * 0x10 + 0x138;
          goto LAB_01be0860;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar4 = FUN_015c2a80(plVar8,*(long *)puVar1,6);
LAB_01be0860:
    FUN_04839fa4(lVar3,plVar8,*(undefined8 *)(lVar4 + 8),0);
    if (lVar7 == 0) goto LAB_01be20c4;
    FUN_02500140(lVar7,lVar3,0);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_01be20c4;
    lVar7 = *(long *)(lVar3 + 0x80);
    plVar8 = *(long **)(lVar3 + 0x48);
    lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
    if ((lVar3 == 0) || (plVar8 == (long *)0x0)) goto LAB_01be20c4;
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          lVar4 = lVar4 + (long)(*piVar6 + 6) * 0x10 + 0x138;
          goto LAB_01be08fc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar4 = FUN_015c2a80(plVar8,*(long *)puVar1,6);
LAB_01be08fc:
    FUN_04839fa4(lVar3,plVar8,*(undefined8 *)(lVar4 + 8),0);
    if (lVar7 == 0) goto LAB_01be20c4;
    FUN_025002a0(lVar7,lVar3,0);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_01be20c4;
    lVar7 = *(long *)(lVar3 + 0x80);
    plVar8 = *(long **)(lVar3 + 0x48);
    lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
    if ((lVar3 == 0) || (plVar8 == (long *)0x0)) goto LAB_01be20c4;
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          lVar4 = lVar4 + (long)(*piVar6 + 6) * 0x10 + 0x138;
          goto LAB_01be0998;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar4 = FUN_015c2a80(plVar8,*(long *)puVar1,6);
LAB_01be0998:
    FUN_04839fa4(lVar3,plVar8,*(undefined8 *)(lVar4 + 8),0);
    if (lVar7 == 0) goto LAB_01be20c4;
    FUN_025001f0(lVar7,lVar3,0);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_01be20c4;
    lVar7 = *(long *)(lVar3 + 0x88);
    plVar8 = *(long **)(lVar3 + 0x48);
    lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
    if ((lVar3 == 0) || (plVar8 == (long *)0x0)) goto LAB_01be20c4;
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          lVar4 = lVar4 + (long)(*piVar6 + 7) * 0x10 + 0x138;
          goto LAB_01be0a34;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar4 = FUN_015c2a80(plVar8,*(long *)puVar1,7);
LAB_01be0a34:
    FUN_04839fa4(lVar3,plVar8,*(undefined8 *)(lVar4 + 8),0);
    if (lVar7 == 0) goto LAB_01be20c4;
    FUN_02500140(lVar7,lVar3,0);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_01be20c4;
    lVar7 = *(long *)(lVar3 + 0x88);
    plVar8 = *(long **)(lVar3 + 0x48);
    lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
    if ((lVar3 == 0) || (plVar8 == (long *)0x0)) goto LAB_01be20c4;
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          lVar4 = lVar4 + (long)(*piVar6 + 7) * 0x10 + 0x138;
          goto LAB_01be0ad0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar4 = FUN_015c2a80(plVar8,*(long *)puVar1,7);
LAB_01be0ad0:
    FUN_04839fa4(lVar3,plVar8,*(undefined8 *)(lVar4 + 8),0);
    if (lVar7 == 0) goto LAB_01be20c4;
    FUN_025002a0(lVar7,lVar3,0);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_01be20c4;
    lVar7 = *(long *)(lVar3 + 0x88);
    plVar8 = *(long **)(lVar3 + 0x48);
    lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
    if ((lVar3 == 0) || (plVar8 == (long *)0x0)) goto LAB_01be20c4;
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          lVar4 = lVar4 + (long)(*piVar6 + 7) * 0x10 + 0x138;
          goto LAB_01be0b6c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar4 = FUN_015c2a80(plVar8,*(long *)puVar1,7);
LAB_01be0b6c:
    FUN_04839fa4(lVar3,plVar8,*(undefined8 *)(lVar4 + 8),0);
    if (lVar7 == 0) goto LAB_01be20c4;
    FUN_025001f0(lVar7,lVar3,0);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_01be20c4;
    lVar7 = *(long *)(lVar3 + 0x90);
    plVar8 = *(long **)(lVar3 + 0x48);
    lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
    if ((lVar3 == 0) || (plVar8 == (long *)0x0)) goto LAB_01be20c4;
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          lVar4 = lVar4 + (long)(*piVar6 + 8) * 0x10 + 0x138;
          goto LAB_01be0c08;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar4 = FUN_015c2a80(plVar8,*(long *)puVar1,8);
LAB_01be0c08:
    FUN_04839fa4(lVar3,plVar8,*(undefined8 *)(lVar4 + 8),0);
    if (lVar7 == 0) goto LAB_01be20c4;
    FUN_02500140(lVar7,lVar3,0);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_01be20c4;
    lVar7 = *(long *)(lVar3 + 0x90);
    plVar8 = *(long **)(lVar3 + 0x48);
    lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
    if ((lVar3 == 0) || (plVar8 == (long *)0x0)) goto LAB_01be20c4;
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          lVar4 = lVar4 + (long)(*piVar6 + 8) * 0x10 + 0x138;
          goto LAB_01be0ca4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar4 = FUN_015c2a80(plVar8,*(long *)puVar1,8);
LAB_01be0ca4:
    FUN_04839fa4(lVar3,plVar8,*(undefined8 *)(lVar4 + 8),0);
    if (lVar7 == 0) goto LAB_01be20c4;
    FUN_025002a0(lVar7,lVar3,0);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_01be20c4;
    lVar7 = *(long *)(lVar3 + 0x90);
    plVar8 = *(long **)(lVar3 + 0x48);
    lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
    if ((lVar3 == 0) || (plVar8 == (long *)0x0)) goto LAB_01be20c4;
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          lVar4 = lVar4 + (long)(*piVar6 + 8) * 0x10 + 0x138;
          goto LAB_01be0d40;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar4 = FUN_015c2a80(plVar8,*(long *)puVar1,8);
LAB_01be0d40:
    FUN_04839fa4(lVar3,plVar8,*(undefined8 *)(lVar4 + 8),0);
    if (lVar7 == 0) goto LAB_01be20c4;
    FUN_025001f0(lVar7,lVar3,0);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_01be20c4;
    lVar7 = *(long *)(lVar3 + 0x98);
    plVar8 = *(long **)(lVar3 + 0x48);
    lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
    if ((lVar3 == 0) || (plVar8 == (long *)0x0)) goto LAB_01be20c4;
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          lVar4 = lVar4 + (long)(*piVar6 + 9) * 0x10 + 0x138;
          goto 
          System_Array_InternalEnumerator<NetworkBufferSerializerInfo>__System_Collections_IEnumerator_get_Current
          ;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar4 = FUN_015c2a80(plVar8,*(long *)puVar1,9);

    System_Array_InternalEnumerator<NetworkBufferSerializerInfo>__System_Collections_IEnumerator_get_Current
    :
    FUN_04839fa4(lVar3,plVar8,*(undefined8 *)(lVar4 + 8),0);
    if (lVar7 == 0) goto LAB_01be20c4;
    FUN_02500140(lVar7,lVar3,0);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_01be20c4;
    lVar7 = *(long *)(lVar3 + 0x98);
    plVar8 = *(long **)(lVar3 + 0x48);
    lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
    if ((lVar3 == 0) || (plVar8 == (long *)0x0)) goto LAB_01be20c4;
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          lVar4 = lVar4 + (long)(*piVar6 + 9) * 0x10 + 0x138;
          goto System_Array_InternalEnumerator<NetworkButtons>__Dispose;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar4 = FUN_015c2a80(plVar8,*(long *)puVar1,9);
System_Array_InternalEnumerator<NetworkButtons>__Dispose:
    FUN_04839fa4(lVar3,plVar8,*(undefined8 *)(lVar4 + 8),0);
    if (lVar7 == 0) goto LAB_01be20c4;
    FUN_025002a0(lVar7,lVar3,0);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_01be20c4;
    lVar7 = *(long *)(lVar3 + 0x98);
    plVar8 = *(long **)(lVar3 + 0x48);
    lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
    if ((lVar3 == 0) || (plVar8 == (long *)0x0)) goto LAB_01be20c4;
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          lVar4 = lVar4 + (long)(*piVar6 + 9) * 0x10 + 0x138;
          goto LAB_01be0f14;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar4 = FUN_015c2a80(plVar8,*(long *)puVar1,9);
LAB_01be0f14:
    FUN_04839fa4(lVar3,plVar8,*(undefined8 *)(lVar4 + 8),0);
    if (lVar7 == 0) goto LAB_01be20c4;
    FUN_025001f0(lVar7,lVar3,0);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_01be20c4;
  }
  *(long *)(lVar3 + 0x48) = (long)param_2;
  thunk_FUN_01656ef8((long *)(lVar3 + 0x48),param_2);
  if (param_2 == (long *)0x0) {
    return;
  }
  if (*param_1 != 0) {
    lVar7 = *(long *)(*param_1 + 0x50);
    lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
    if (lVar3 != 0) {
      lVar4 = *param_2;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            lVar4 = lVar4 + (long)*piVar6 * 0x10 + 0x138;
            goto LAB_01be0fd0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      lVar4 = FUN_015c2a80(param_2,*(long *)puVar1,0);
LAB_01be0fd0:
      FUN_04839fa4(lVar3,param_2,*(undefined8 *)(lVar4 + 8),0);
      if (lVar7 != 0) {
        FUN_025000e8(lVar7,lVar3,0);
        if (*param_1 != 0) {
          lVar7 = *(long *)(*param_1 + 0x50);
          lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
          if (lVar3 != 0) {
            lVar4 = *param_2;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                  lVar4 = lVar4 + (long)*piVar6 * 0x10 + 0x138;
                  goto LAB_01be1060;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            lVar4 = FUN_015c2a80(param_2,*(long *)puVar1,0);
LAB_01be1060:
            FUN_04839fa4(lVar3,param_2,*(undefined8 *)(lVar4 + 8),0);
            if (lVar7 != 0) {
              FUN_02500248(lVar7,lVar3,0);
              if (*param_1 != 0) {
                lVar7 = *(long *)(*param_1 + 0x50);
                lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
                if (lVar3 != 0) {
                  lVar4 = *param_2;
                  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
                  if (uVar5 != 0) {
                    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                        lVar4 = lVar4 + (long)*piVar6 * 0x10 + 0x138;
                        goto LAB_01be10f0;
                      }
                      uVar5 = uVar5 - 1;
                      piVar6 = piVar6 + 4;
                    } while (uVar5 != 0);
                  }
                  lVar4 = FUN_015c2a80(param_2,*(long *)puVar1,0);
LAB_01be10f0:
                  FUN_04839fa4(lVar3,param_2,*(undefined8 *)(lVar4 + 8),0);
                  if (lVar7 != 0) {
                    FUN_02500198(lVar7,lVar3,0);
                    if (*param_1 != 0) {
                      lVar7 = *(long *)(*param_1 + 0x58);
                      lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
                      if (lVar3 != 0) {
                        lVar4 = *param_2;
                        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
                        if (uVar5 != 0) {
                          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                              lVar4 = lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138;
                              goto LAB_01be1184;
                            }
                            uVar5 = uVar5 - 1;
                            piVar6 = piVar6 + 4;
                          } while (uVar5 != 0);
                        }
                        lVar4 = FUN_015c2a80(param_2,*(long *)puVar1,1);
LAB_01be1184:
                        FUN_04839fa4(lVar3,param_2,*(undefined8 *)(lVar4 + 8),0);
                        if (lVar7 != 0) {
                          FUN_025000e8(lVar7,lVar3,0);
                          if (*param_1 != 0) {
                            lVar7 = *(long *)(*param_1 + 0x58);
                            lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
                            if (lVar3 != 0) {
                              lVar4 = *param_2;
                              uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
                              if (uVar5 != 0) {
                                piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                                    lVar4 = lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138;
                                    goto LAB_01be1218;
                                  }
                                  uVar5 = uVar5 - 1;
                                  piVar6 = piVar6 + 4;
                                } while (uVar5 != 0);
                              }
                              lVar4 = FUN_015c2a80(param_2,*(long *)puVar1,1);
LAB_01be1218:
                              FUN_04839fa4(lVar3,param_2,*(undefined8 *)(lVar4 + 8),0);
                              if (lVar7 != 0) {
                                FUN_02500248(lVar7,lVar3,0);
                                if (*param_1 != 0) {
                                  lVar7 = *(long *)(*param_1 + 0x58);
                                  lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
                                  if (lVar3 != 0) {
                                    lVar4 = *param_2;
                                    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
                                    if (uVar5 != 0) {
                                      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                                      do {
                                        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                                          lVar4 = lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138;
                                          goto LAB_01be12ac;
                                        }
                                        uVar5 = uVar5 - 1;
                                        piVar6 = piVar6 + 4;
                                      } while (uVar5 != 0);
                                    }
                                    lVar4 = FUN_015c2a80(param_2,*(long *)puVar1,1);
LAB_01be12ac:
                                    FUN_04839fa4(lVar3,param_2,*(undefined8 *)(lVar4 + 8),0);
                                    if (lVar7 != 0) {
                                      FUN_02500198(lVar7,lVar3,0);
                                      if (*param_1 != 0) {
                                        lVar7 = *(long *)(*param_1 + 0x60);
                                        lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
                                        if (lVar3 != 0) {
                                          lVar4 = *param_2;
                                          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
                                          if (uVar5 != 0) {
                                            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                                            do {
                                              if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                                                lVar4 = lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138;
                                                goto LAB_01be1340;
                                              }
                                              uVar5 = uVar5 - 1;
                                              piVar6 = piVar6 + 4;
                                            } while (uVar5 != 0);
                                          }
                                          lVar4 = FUN_015c2a80(param_2,*(long *)puVar1,2);
LAB_01be1340:
                                          FUN_04839fa4(lVar3,param_2,*(undefined8 *)(lVar4 + 8),0);
                                          if (lVar7 != 0) {
                                            FUN_025000e8(lVar7,lVar3,0);
                                            if (*param_1 != 0) {
                                              lVar7 = *(long *)(*param_1 + 0x60);
                                              lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
                                              if (lVar3 != 0) {
                                                lVar4 = *param_2;
                                                uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
                                                if (uVar5 != 0) {
                                                  piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                                                  do {
                                                    if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                                                      lVar4 = lVar4 + (long)(*piVar6 + 2) * 0x10 +
                                                              0x138;
                                                      goto LAB_01be13d4;
                                                    }
                                                    uVar5 = uVar5 - 1;
                                                    piVar6 = piVar6 + 4;
                                                  } while (uVar5 != 0);
                                                }
                                                lVar4 = FUN_015c2a80(param_2,*(long *)puVar1,2);
LAB_01be13d4:
                                                FUN_04839fa4(lVar3,param_2,
                                                             *(undefined8 *)(lVar4 + 8),0);
                                                if (lVar7 != 0) {
                                                  FUN_02500248(lVar7,lVar3,0);
                                                  if (*param_1 != 0) {
                                                    lVar7 = *(long *)(*param_1 + 0x60);
                                                    lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar2
                                                                              );
                                                    if (lVar3 != 0) {
                                                      lVar4 = *param_2;
                                                      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
                                                      if (uVar5 != 0) {
                                                        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8
                                                                        );
                                                        do {
                                                          if (*(long *)(piVar6 + -2) ==
                                                              *(long *)puVar1) {
                                                            lVar4 = lVar4 + (long)(*piVar6 + 2) *
                                                                            0x10 + 0x138;
                                                            goto LAB_01be1468;
                                                          }
                                                          uVar5 = uVar5 - 1;
                                                          piVar6 = piVar6 + 4;
                                                        } while (uVar5 != 0);
                                                      }
                                                      lVar4 = FUN_015c2a80(param_2,*(long *)puVar1,2
                                                                          );
LAB_01be1468:
                                                      FUN_04839fa4(lVar3,param_2,
                                                                   *(undefined8 *)(lVar4 + 8),0);
                                                      if (lVar7 != 0) {
                                                        FUN_02500198(lVar7,lVar3,0);
                                                        if (*param_1 != 0) {
                                                          lVar7 = *(long *)(*param_1 + 0x68);
                                                          lVar3 = thunk_FUN_015d056c(*(undefined8 *)
                                                                                      puVar2);
                                                          if (lVar3 != 0) {
                                                            lVar4 = *param_2;
                                                            uVar5 = (ulong)*(ushort *)
                                                                            (lVar4 + 0x12a);
                                                            if (uVar5 != 0) {
                                                              piVar6 = (int *)(*(long *)(lVar4 + 
                                                  0xb0) + 8);
                                                  do {
                                                    if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                                                      lVar4 = lVar4 + (long)(*piVar6 + 3) * 0x10 +
                                                              0x138;
                                                      goto LAB_01be14fc;
                                                    }
                                                    uVar5 = uVar5 - 1;
                                                    piVar6 = piVar6 + 4;
                                                  } while (uVar5 != 0);
                                                  }
                                                  lVar4 = FUN_015c2a80(param_2,*(long *)puVar1,3);
LAB_01be14fc:
                                                  FUN_04839fa4(lVar3,param_2,
                                                               *(undefined8 *)(lVar4 + 8),0);
                                                  if (lVar7 != 0) {
                                                    FUN_025000e8(lVar7,lVar3,0);
                                                    if (*param_1 != 0) {
                                                      lVar7 = *(long *)(*param_1 + 0x68);
                                                      lVar3 = thunk_FUN_015d056c(*(undefined8 *)
                                                                                  puVar2);
                                                      if (lVar3 != 0) {
                                                        lVar4 = *param_2;
                                                        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
                                                        if (uVar5 != 0) {
                                                          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) +
                                                                          8);
                                                          do {
                                                            if (*(long *)(piVar6 + -2) ==
                                                                *(long *)puVar1) {
                                                              lVar4 = lVar4 + (long)(*piVar6 + 3) *
                                                                              0x10 + 0x138;
                                                              goto LAB_01be1590;
                                                            }
                                                            uVar5 = uVar5 - 1;
                                                            piVar6 = piVar6 + 4;
                                                          } while (uVar5 != 0);
                                                        }
                                                        lVar4 = FUN_015c2a80(param_2,*(long *)puVar1
                                                                             ,3);
LAB_01be1590:
                                                        FUN_04839fa4(lVar3,param_2,
                                                                     *(undefined8 *)(lVar4 + 8),0);
                                                        if (lVar7 != 0) {
                                                          FUN_02500248(lVar7,lVar3,0);
                                                          if (*param_1 != 0) {
                                                            lVar7 = *(long *)(*param_1 + 0x68);
                                                            lVar3 = thunk_FUN_015d056c(*(undefined8
                                                                                         *)puVar2);
                                                            if (lVar3 != 0) {
                                                              lVar4 = *param_2;
                                                              uVar5 = (ulong)*(ushort *)
                                                                              (lVar4 + 0x12a);
                                                              if (uVar5 != 0) {
                                                                piVar6 = (int *)(*(long *)(lVar4 + 
                                                  0xb0) + 8);
                                                  do {
                                                    if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                                                      lVar4 = lVar4 + (long)(*piVar6 + 3) * 0x10 +
                                                              0x138;
                                                      goto LAB_01be1624;
                                                    }
                                                    uVar5 = uVar5 - 1;
                                                    piVar6 = piVar6 + 4;
                                                  } while (uVar5 != 0);
                                                  }
                                                  lVar4 = FUN_015c2a80(param_2,*(long *)puVar1,3);
LAB_01be1624:
                                                  FUN_04839fa4(lVar3,param_2,
                                                               *(undefined8 *)(lVar4 + 8),0);
                                                  if (lVar7 != 0) {
                                                    FUN_02500198(lVar7,lVar3,0);
                                                    if (*param_1 != 0) {
                                                      lVar7 = *(long *)(*param_1 + 0x70);
                                                      lVar3 = thunk_FUN_015d056c(*(undefined8 *)
                                                                                  puVar2);
                                                      if (lVar3 != 0) {
                                                        lVar4 = *param_2;
                                                        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
                                                        if (uVar5 != 0) {
                                                          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) +
                                                                          8);
                                                          do {
                                                            if (*(long *)(piVar6 + -2) ==
                                                                *(long *)puVar1) {
                                                              lVar4 = lVar4 + (long)(*piVar6 + 4) *
                                                                              0x10 + 0x138;
                                                              goto LAB_01be16b8;
                                                            }
                                                            uVar5 = uVar5 - 1;
                                                            piVar6 = piVar6 + 4;
                                                          } while (uVar5 != 0);
                                                        }
                                                        lVar4 = FUN_015c2a80(param_2,*(long *)puVar1
                                                                             ,4);
LAB_01be16b8:
                                                        FUN_04839fa4(lVar3,param_2,
                                                                     *(undefined8 *)(lVar4 + 8),0);
                                                        if (lVar7 != 0) {
                                                          FUN_025000e8(lVar7,lVar3,0);
                                                          if (*param_1 != 0) {
                                                            lVar7 = *(long *)(*param_1 + 0x70);
                                                            lVar3 = thunk_FUN_015d056c(*(undefined8
                                                                                         *)puVar2);
                                                            if (lVar3 != 0) {
                                                              lVar4 = *param_2;
                                                              uVar5 = (ulong)*(ushort *)
                                                                              (lVar4 + 0x12a);
                                                              if (uVar5 != 0) {
                                                                piVar6 = (int *)(*(long *)(lVar4 + 
                                                  0xb0) + 8);
                                                  do {
                                                    if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                                                      lVar4 = lVar4 + (long)(*piVar6 + 4) * 0x10 +
                                                              0x138;
                                                      goto LAB_01be174c;
                                                    }
                                                    uVar5 = uVar5 - 1;
                                                    piVar6 = piVar6 + 4;
                                                  } while (uVar5 != 0);
                                                  }
                                                  lVar4 = FUN_015c2a80(param_2,*(long *)puVar1,4);
LAB_01be174c:
                                                  FUN_04839fa4(lVar3,param_2,
                                                               *(undefined8 *)(lVar4 + 8),0);
                                                  if (lVar7 != 0) {
                                                    FUN_02500248(lVar7,lVar3,0);
                                                    if (*param_1 != 0) {
                                                      lVar7 = *(long *)(*param_1 + 0x70);
                                                      lVar3 = thunk_FUN_015d056c(*(undefined8 *)
                                                                                  puVar2);
                                                      if (lVar3 != 0) {
                                                        lVar4 = *param_2;
                                                        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
                                                        if (uVar5 != 0) {
                                                          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) +
                                                                          8);
                                                          do {
                                                            if (*(long *)(piVar6 + -2) ==
                                                                *(long *)puVar1) {
                                                              lVar4 = lVar4 + (long)(*piVar6 + 4) *
                                                                              0x10 + 0x138;
                                                              goto LAB_01be17e0;
                                                            }
                                                            uVar5 = uVar5 - 1;
                                                            piVar6 = piVar6 + 4;
                                                          } while (uVar5 != 0);
                                                        }
                                                        lVar4 = FUN_015c2a80(param_2,*(long *)puVar1
                                                                             ,4);
LAB_01be17e0:
                                                        FUN_04839fa4(lVar3,param_2,
                                                                     *(undefined8 *)(lVar4 + 8),0);
                                                        if (lVar7 != 0) {
                                                          FUN_02500198(lVar7,lVar3,0);
                                                          if (*param_1 != 0) {
                                                            lVar7 = *(long *)(*param_1 + 0x78);
                                                            lVar3 = thunk_FUN_015d056c(*(undefined8
                                                                                         *)puVar2);
                                                            if (lVar3 != 0) {
                                                              lVar4 = *param_2;
                                                              uVar5 = (ulong)*(ushort *)
                                                                              (lVar4 + 0x12a);
                                                              if (uVar5 != 0) {
                                                                piVar6 = (int *)(*(long *)(lVar4 + 
                                                  0xb0) + 8);
                                                  do {
                                                    if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                                                      lVar4 = lVar4 + (long)(*piVar6 + 5) * 0x10 +
                                                              0x138;
                                                      goto LAB_01be1874;
                                                    }
                                                    uVar5 = uVar5 - 1;
                                                    piVar6 = piVar6 + 4;
                                                  } while (uVar5 != 0);
                                                  }
                                                  lVar4 = FUN_015c2a80(param_2,*(long *)puVar1,5);
LAB_01be1874:
                                                  FUN_04839fa4(lVar3,param_2,
                                                               *(undefined8 *)(lVar4 + 8),0);
                                                  if (lVar7 != 0) {
                                                    FUN_025000e8(lVar7,lVar3,0);
                                                    if (*param_1 != 0) {
                                                      lVar7 = *(long *)(*param_1 + 0x78);
                                                      lVar3 = thunk_FUN_015d056c(*(undefined8 *)
                                                                                  puVar2);
                                                      if (lVar3 != 0) {
                                                        lVar4 = *param_2;
                                                        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
                                                        if (uVar5 != 0) {
                                                          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) +
                                                                          8);
                                                          do {
                                                            if (*(long *)(piVar6 + -2) ==
                                                                *(long *)puVar1) {
                                                              lVar4 = lVar4 + (long)(*piVar6 + 5) *
                                                                              0x10 + 0x138;
                                                              goto LAB_01be1908;
                                                            }
                                                            uVar5 = uVar5 - 1;
                                                            piVar6 = piVar6 + 4;
                                                          } while (uVar5 != 0);
                                                        }
                                                        lVar4 = FUN_015c2a80(param_2,*(long *)puVar1
                                                                             ,5);
LAB_01be1908:
                                                        FUN_04839fa4(lVar3,param_2,
                                                                     *(undefined8 *)(lVar4 + 8),0);
                                                        if (lVar7 != 0) {
                                                          FUN_02500248(lVar7,lVar3,0);
                                                          if (*param_1 != 0) {
                                                            lVar7 = *(long *)(*param_1 + 0x78);
                                                            lVar3 = thunk_FUN_015d056c(*(undefined8
                                                                                         *)puVar2);
                                                            if (lVar3 != 0) {
                                                              lVar4 = *param_2;
                                                              uVar5 = (ulong)*(ushort *)
                                                                              (lVar4 + 0x12a);
                                                              if (uVar5 != 0) {
                                                                piVar6 = (int *)(*(long *)(lVar4 + 
                                                  0xb0) + 8);
                                                  do {
                                                    if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                                                      lVar4 = lVar4 + (long)(*piVar6 + 5) * 0x10 +
                                                              0x138;
                                                      goto LAB_01be199c;
                                                    }
                                                    uVar5 = uVar5 - 1;
                                                    piVar6 = piVar6 + 4;
                                                  } while (uVar5 != 0);
                                                  }
                                                  lVar4 = FUN_015c2a80(param_2,*(long *)puVar1,5);
LAB_01be199c:
                                                  FUN_04839fa4(lVar3,param_2,
                                                               *(undefined8 *)(lVar4 + 8),0);
                                                  if (lVar7 != 0) {
                                                    FUN_02500198(lVar7,lVar3,0);
                                                    if (*param_1 != 0) {
                                                      lVar7 = *(long *)(*param_1 + 0x80);
                                                      lVar3 = thunk_FUN_015d056c(*(undefined8 *)
                                                                                  puVar2);
                                                      if (lVar3 != 0) {
                                                        lVar4 = *param_2;
                                                        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
                                                        if (uVar5 != 0) {
                                                          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) +
                                                                          8);
                                                          do {
                                                            if (*(long *)(piVar6 + -2) ==
                                                                *(long *)puVar1) {
                                                              lVar4 = lVar4 + (long)(*piVar6 + 6) *
                                                                              0x10 + 0x138;
                                                              goto LAB_01be1a30;
                                                            }
                                                            uVar5 = uVar5 - 1;
                                                            piVar6 = piVar6 + 4;
                                                          } while (uVar5 != 0);
                                                        }
                                                        lVar4 = FUN_015c2a80(param_2,*(long *)puVar1
                                                                             ,6);
LAB_01be1a30:
                                                        FUN_04839fa4(lVar3,param_2,
                                                                     *(undefined8 *)(lVar4 + 8),0);
                                                        if (lVar7 != 0) {
                                                          FUN_025000e8(lVar7,lVar3,0);
                                                          if (*param_1 != 0) {
                                                            lVar7 = *(long *)(*param_1 + 0x80);
                                                            lVar3 = thunk_FUN_015d056c(*(undefined8
                                                                                         *)puVar2);
                                                            if (lVar3 != 0) {
                                                              lVar4 = *param_2;
                                                              uVar5 = (ulong)*(ushort *)
                                                                              (lVar4 + 0x12a);
                                                              if (uVar5 != 0) {
                                                                piVar6 = (int *)(*(long *)(lVar4 + 
                                                  0xb0) + 8);
                                                  do {
                                                    if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                                                      lVar4 = lVar4 + (long)(*piVar6 + 6) * 0x10 +
                                                              0x138;
                                                      goto LAB_01be1ac4;
                                                    }
                                                    uVar5 = uVar5 - 1;
                                                    piVar6 = piVar6 + 4;
                                                  } while (uVar5 != 0);
                                                  }
                                                  lVar4 = FUN_015c2a80(param_2,*(long *)puVar1,6);
LAB_01be1ac4:
                                                  FUN_04839fa4(lVar3,param_2,
                                                               *(undefined8 *)(lVar4 + 8),0);
                                                  if (lVar7 != 0) {
                                                    FUN_02500248(lVar7,lVar3,0);
                                                    if (*param_1 != 0) {
                                                      lVar7 = *(long *)(*param_1 + 0x80);
                                                      lVar3 = thunk_FUN_015d056c(*(undefined8 *)
                                                                                  puVar2);
                                                      if (lVar3 != 0) {
                                                        lVar4 = *param_2;
                                                        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
                                                        if (uVar5 != 0) {
                                                          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) +
                                                                          8);
                                                          do {
                                                            if (*(long *)(piVar6 + -2) ==
                                                                *(long *)puVar1) {
                                                              lVar4 = lVar4 + (long)(*piVar6 + 6) *
                                                                              0x10 + 0x138;
                                                              goto LAB_01be1b58;
                                                            }
                                                            uVar5 = uVar5 - 1;
                                                            piVar6 = piVar6 + 4;
                                                          } while (uVar5 != 0);
                                                        }
                                                        lVar4 = FUN_015c2a80(param_2,*(long *)puVar1
                                                                             ,6);
LAB_01be1b58:
                                                        FUN_04839fa4(lVar3,param_2,
                                                                     *(undefined8 *)(lVar4 + 8),0);
                                                        if (lVar7 != 0) {
                                                          FUN_02500198(lVar7,lVar3,0);
                                                          if (*param_1 != 0) {
                                                            lVar7 = *(long *)(*param_1 + 0x88);
                                                            lVar3 = thunk_FUN_015d056c(*(undefined8
                                                                                         *)puVar2);
                                                            if (lVar3 != 0) {
                                                              lVar4 = *param_2;
                                                              uVar5 = (ulong)*(ushort *)
                                                                              (lVar4 + 0x12a);
                                                              if (uVar5 != 0) {
                                                                piVar6 = (int *)(*(long *)(lVar4 + 
                                                  0xb0) + 8);
                                                  do {
                                                    if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                                                      lVar4 = lVar4 + (long)(*piVar6 + 7) * 0x10 +
                                                              0x138;
                                                      goto LAB_01be1bec;
                                                    }
                                                    uVar5 = uVar5 - 1;
                                                    piVar6 = piVar6 + 4;
                                                  } while (uVar5 != 0);
                                                  }
                                                  lVar4 = FUN_015c2a80(param_2,*(long *)puVar1,7);
LAB_01be1bec:
                                                  FUN_04839fa4(lVar3,param_2,
                                                               *(undefined8 *)(lVar4 + 8),0);
                                                  if (lVar7 != 0) {
                                                    FUN_025000e8(lVar7,lVar3,0);
                                                    if (*param_1 != 0) {
                                                      lVar7 = *(long *)(*param_1 + 0x88);
                                                      lVar3 = thunk_FUN_015d056c(*(undefined8 *)
                                                                                  puVar2);
                                                      if (lVar3 != 0) {
                                                        lVar4 = *param_2;
                                                        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
                                                        if (uVar5 != 0) {
                                                          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) +
                                                                          8);
                                                          do {
                                                            if (*(long *)(piVar6 + -2) ==
                                                                *(long *)puVar1) {
                                                              lVar4 = lVar4 + (long)(*piVar6 + 7) *
                                                                              0x10 + 0x138;
                                                              goto LAB_01be1c80;
                                                            }
                                                            uVar5 = uVar5 - 1;
                                                            piVar6 = piVar6 + 4;
                                                          } while (uVar5 != 0);
                                                        }
                                                        lVar4 = FUN_015c2a80(param_2,*(long *)puVar1
                                                                             ,7);
LAB_01be1c80:
                                                        FUN_04839fa4(lVar3,param_2,
                                                                     *(undefined8 *)(lVar4 + 8),0);
                                                        if (lVar7 != 0) {
                                                          FUN_02500248(lVar7,lVar3,0);
                                                          if (*param_1 != 0) {
                                                            lVar7 = *(long *)(*param_1 + 0x88);
                                                            lVar3 = thunk_FUN_015d056c(*(undefined8
                                                                                         *)puVar2);
                                                            if (lVar3 != 0) {
                                                              lVar4 = *param_2;
                                                              uVar5 = (ulong)*(ushort *)
                                                                              (lVar4 + 0x12a);
                                                              if (uVar5 != 0) {
                                                                piVar6 = (int *)(*(long *)(lVar4 + 
                                                  0xb0) + 8);
                                                  do {
                                                    if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                                                      lVar4 = lVar4 + (long)(*piVar6 + 7) * 0x10 +
                                                              0x138;
                                                      goto LAB_01be1d14;
                                                    }
                                                    uVar5 = uVar5 - 1;
                                                    piVar6 = piVar6 + 4;
                                                  } while (uVar5 != 0);
                                                  }
                                                  lVar4 = FUN_015c2a80(param_2,*(long *)puVar1,7);
LAB_01be1d14:
                                                  FUN_04839fa4(lVar3,param_2,
                                                               *(undefined8 *)(lVar4 + 8),0);
                                                  if (lVar7 != 0) {
                                                    FUN_02500198(lVar7,lVar3,0);
                                                    if (*param_1 != 0) {
                                                      lVar7 = *(long *)(*param_1 + 0x90);
                                                      lVar3 = thunk_FUN_015d056c(*(undefined8 *)
                                                                                  puVar2);
                                                      if (lVar3 != 0) {
                                                        lVar4 = *param_2;
                                                        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
                                                        if (uVar5 != 0) {
                                                          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) +
                                                                          8);
                                                          do {
                                                            if (*(long *)(piVar6 + -2) ==
                                                                *(long *)puVar1) {
                                                              lVar4 = lVar4 + (long)(*piVar6 + 8) *
                                                                              0x10 + 0x138;
                                                              goto LAB_01be1da8;
                                                            }
                                                            uVar5 = uVar5 - 1;
                                                            piVar6 = piVar6 + 4;
                                                          } while (uVar5 != 0);
                                                        }
                                                        lVar4 = FUN_015c2a80(param_2,*(long *)puVar1
                                                                             ,8);
LAB_01be1da8:
                                                        FUN_04839fa4(lVar3,param_2,
                                                                     *(undefined8 *)(lVar4 + 8),0);
                                                        if (lVar7 != 0) {
                                                          FUN_025000e8(lVar7,lVar3,0);
                                                          if (*param_1 != 0) {
                                                            lVar7 = *(long *)(*param_1 + 0x90);
                                                            lVar3 = thunk_FUN_015d056c(*(undefined8
                                                                                         *)puVar2);
                                                            if (lVar3 != 0) {
                                                              lVar4 = *param_2;
                                                              uVar5 = (ulong)*(ushort *)
                                                                              (lVar4 + 0x12a);
                                                              if (uVar5 != 0) {
                                                                piVar6 = (int *)(*(long *)(lVar4 + 
                                                  0xb0) + 8);
                                                  do {
                                                    if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                                                      lVar4 = lVar4 + (long)(*piVar6 + 8) * 0x10 +
                                                              0x138;
                                                      goto LAB_01be1e3c;
                                                    }
                                                    uVar5 = uVar5 - 1;
                                                    piVar6 = piVar6 + 4;
                                                  } while (uVar5 != 0);
                                                  }
                                                  lVar4 = FUN_015c2a80(param_2,*(long *)puVar1,8);
LAB_01be1e3c:
                                                  FUN_04839fa4(lVar3,param_2,
                                                               *(undefined8 *)(lVar4 + 8),0);
                                                  if (lVar7 != 0) {
                                                    FUN_02500248(lVar7,lVar3,0);
                                                    if (*param_1 != 0) {
                                                      lVar7 = *(long *)(*param_1 + 0x90);
                                                      lVar3 = thunk_FUN_015d056c(*(undefined8 *)
                                                                                  puVar2);
                                                      if (lVar3 != 0) {
                                                        lVar4 = *param_2;
                                                        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
                                                        if (uVar5 != 0) {
                                                          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) +
                                                                          8);
                                                          do {
                                                            if (*(long *)(piVar6 + -2) ==
                                                                *(long *)puVar1) {
                                                              lVar4 = lVar4 + (long)(*piVar6 + 8) *
                                                                              0x10 + 0x138;
                                                              goto LAB_01be1ed0;
                                                            }
                                                            uVar5 = uVar5 - 1;
                                                            piVar6 = piVar6 + 4;
                                                          } while (uVar5 != 0);
                                                        }
                                                        lVar4 = FUN_015c2a80(param_2,*(long *)puVar1
                                                                             ,8);
LAB_01be1ed0:
                                                        FUN_04839fa4(lVar3,param_2,
                                                                     *(undefined8 *)(lVar4 + 8),0);
                                                        if (lVar7 != 0) {
                                                          FUN_02500198(lVar7,lVar3,0);
                                                          if (*param_1 != 0) {
                                                            lVar7 = *(long *)(*param_1 + 0x98);
                                                            lVar3 = thunk_FUN_015d056c(*(undefined8
                                                                                         *)puVar2);
                                                            if (lVar3 != 0) {
                                                              lVar4 = *param_2;
                                                              uVar5 = (ulong)*(ushort *)
                                                                              (lVar4 + 0x12a);
                                                              if (uVar5 != 0) {
                                                                piVar6 = (int *)(*(long *)(lVar4 + 
                                                  0xb0) + 8);
                                                  do {
                                                    if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                                                      lVar4 = lVar4 + (long)(*piVar6 + 9) * 0x10 +
                                                              0x138;
                                                      goto LAB_01be1f64;
                                                    }
                                                    uVar5 = uVar5 - 1;
                                                    piVar6 = piVar6 + 4;
                                                  } while (uVar5 != 0);
                                                  }
                                                  lVar4 = FUN_015c2a80(param_2,*(long *)puVar1,9);
LAB_01be1f64:
                                                  FUN_04839fa4(lVar3,param_2,
                                                               *(undefined8 *)(lVar4 + 8),0);
                                                  if (lVar7 != 0) {
                                                    FUN_025000e8(lVar7,lVar3,0);
                                                    if (*param_1 != 0) {
                                                      lVar7 = *(long *)(*param_1 + 0x98);
                                                      lVar3 = thunk_FUN_015d056c(*(undefined8 *)
                                                                                  puVar2);
                                                      if (lVar3 != 0) {
                                                        lVar4 = *param_2;
                                                        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
                                                        if (uVar5 != 0) {
                                                          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) +
                                                                          8);
                                                          do {
                                                            if (*(long *)(piVar6 + -2) ==
                                                                *(long *)puVar1) {
                                                              lVar4 = lVar4 + (long)(*piVar6 + 9) *
                                                                              0x10 + 0x138;
                                                              goto LAB_01be1ff8;
                                                            }
                                                            uVar5 = uVar5 - 1;
                                                            piVar6 = piVar6 + 4;
                                                          } while (uVar5 != 0);
                                                        }
                                                        lVar4 = FUN_015c2a80(param_2,*(long *)puVar1
                                                                             ,9);
LAB_01be1ff8:
                                                        FUN_04839fa4(lVar3,param_2,
                                                                     *(undefined8 *)(lVar4 + 8),0);
                                                        if (lVar7 != 0) {
                                                          FUN_02500248(lVar7,lVar3,0);
                                                          if (*param_1 != 0) {
                                                            lVar7 = *(long *)(*param_1 + 0x98);
                                                            lVar3 = thunk_FUN_015d056c(*(undefined8
                                                                                         *)puVar2);
                                                            if (lVar3 != 0) {
                                                              lVar4 = *param_2;
                                                              uVar5 = (ulong)*(ushort *)
                                                                              (lVar4 + 0x12a);
                                                              if (uVar5 != 0) {
                                                                piVar6 = (int *)(*(long *)(lVar4 + 
                                                  0xb0) + 8);
                                                  do {
                                                    if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                                                      lVar4 = lVar4 + (long)(*piVar6 + 9) * 0x10 +
                                                              0x138;
                                                      goto LAB_01be208c;
                                                    }
                                                    uVar5 = uVar5 - 1;
                                                    piVar6 = piVar6 + 4;
                                                  } while (uVar5 != 0);
                                                  }
                                                  lVar4 = FUN_015c2a80(param_2,*(long *)puVar1,9);
LAB_01be208c:
                                                  FUN_04839fa4(lVar3,param_2,
                                                               *(undefined8 *)(lVar4 + 8),0);
                                                  if (lVar7 != 0) {
                                                    FUN_02500198(lVar7,lVar3,0);
                                                    return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_01be20c4:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


