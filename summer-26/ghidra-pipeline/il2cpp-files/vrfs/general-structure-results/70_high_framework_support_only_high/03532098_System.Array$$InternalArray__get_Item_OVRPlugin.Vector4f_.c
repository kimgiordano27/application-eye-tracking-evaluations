/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.Vector4f>
ENTRY_POINT: 03532098
PROGRAM: vrfs-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


long * System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>(void)

{
  ushort uVar1;
  undefined *puVar2;
  bool in_ZR;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long unaff_x19;
  code *pcVar9;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar10;
  long *unaff_x24;
  long *unaff_x25;
  
  puVar2 = PTR_DAT_06dba180;
  if (!in_ZR) {
                    /* WARNING: Subroutine does not return */
    FUN_0160f170();
  }
  uVar10 = *(undefined8 *)PTR_DAT_06e41b90;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  plVar4 = (long *)FUN_031c8668(uVar10,0);
  lVar5 = FUN_0160edfc(*(undefined8 *)puVar2,1);
  if (lVar5 == 0) goto LAB_035322ec;
  if ((unaff_x21 != 0) && (lVar6 = thunk_FUN_015d0480(), lVar6 == 0)) {
    uVar10 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
    FUN_0160ee7c(uVar10,0);
  }
  if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eebc();
  }
  *(long *)(lVar5 + 0x20) = unaff_x21;
  thunk_FUN_01656ef8();
  if ((plVar4 == (long *)0x0) ||
     (plVar4 = (long *)(**(code **)(*plVar4 + 0x938))(plVar4,lVar5,*(undefined8 *)(*plVar4 + 0x940))
     , plVar4 == (long *)0x0)) goto LAB_035322ec;
  uVar7 = (**(code **)(*plVar4 + 0x298))();
  if ((uVar7 & 1) != 0) {
    uVar10 = *(undefined8 *)PTR_DAT_06e43370;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar10 = FUN_031c8668(uVar10,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_016466fc(*unaff_x24);
    }
    goto System_Array__InternalArray__get_Item<OVRPlugin_Vector2f>;
  }
  uVar7 = (**(code **)(*unaff_x20 + 0x598))();
  if ((uVar7 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_06e41fa8 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar10 = FUN_02d418dc();
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_016466fc(*unaff_x25);
    }
    uVar3 = FUN_031d4d6c(uVar10,0);
    switch(uVar3) {
    case 5:
      lVar5 = *unaff_x25;
      puVar8 = (undefined8 *)PTR_DAT_06e62420;
      break;
    case 6:
    case 8:
    case 9:
    case 10:
      lVar5 = *unaff_x25;
      puVar8 = (undefined8 *)PTR_DAT_06d89750;
      break;
    case 7:
      lVar5 = *unaff_x25;
      puVar8 = (undefined8 *)PTR_DAT_06e0d528;
      break;
    case 0xb:
    case 0xc:
      lVar5 = *unaff_x25;
      puVar8 = (undefined8 *)PTR_DAT_06df24e8;
      break;
    default:
      goto switchD_0353221c_default;
    }
    uVar10 = *puVar8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar10 = FUN_031c8668(uVar10,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_016466fc(*unaff_x24);
    }
System_Array__InternalArray__get_Item<OVRPlugin_Vector2f>:
    plVar4 = (long *)FUN_02d4fc68(uVar10);
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_015c2790(lVar5);
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x18);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_015c2790(lVar5);
    }
    if (plVar4 != (long *)0x0) {
      if ((*(byte *)(*plVar4 + 300) < *(byte *)(lVar5 + 300)) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar5 + 300) * 8 + -8) != lVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170(plVar4);
      }
    }
    return plVar4;
  }
switchD_0353221c_default:
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_015c2790();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x28) + 0x132) & 1) == 0) {
    FUN_015c2790();
  }
  plVar4 = (long *)thunk_FUN_015d056c();
  if (plVar4 != (long *)0x0) {
    lVar6 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(lVar6 + 0x132);
    lVar5 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_015c2790(lVar6);
      uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x132);
      lVar5 = *(long *)(unaff_x19 + 0x20);
    }
    pcVar9 = *(code **)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x30) + 8);
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_015c2790(lVar5);
    }
    (*pcVar9)(plVar4,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x30));
    return plVar4;
  }
LAB_035322ec:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


